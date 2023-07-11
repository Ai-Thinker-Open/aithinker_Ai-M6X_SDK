#include "bflb_mtimer.h"
#include "board.h"
#include "mbedtls/aes.h"
#include "mbedtls/sha1.h"
#include "mbedtls/sha256.h"
#include "mbedtls/sha512.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ctr_drbg.h"
#include "mbedtls/platform.h"
#include "mbedtls/ecdsa.h"
#include "mbedtls/ecdh.h"

const uint8_t key[32] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
    0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
};

uint8_t aes_iv[16] = { 0 };

__attribute__((aligned(32))) uint8_t aes_input_buf[16 * 1024];
__attribute__((aligned(32))) uint8_t aes_enc_buf[16 * 1024];
__attribute__((aligned(32))) uint8_t aes_dec_buf[16 * 1024];

__attribute__((aligned(32))) uint8_t sha_input_buf[16 * 1024]; /* input addr must be align 32 */

uint8_t sha_output_buf[128];

void mbedtls_check(uint32_t j)
{
    for (uint32_t i = 0; i < 16 * j; i++) {
        if (aes_dec_buf[i] != aes_input_buf[i]) {
            printf("mbedtls test fail\r\n");
            while (1) {
            }
        }
    }
}

#define assert_exit(cond, ret)                                                          \
    do {                                                                                \
        if (!(cond)) {                                                                  \
            printf("  !. assert: failed [line: %d, error: -0x%04X]\n", __LINE__, -ret); \
            goto cleanup;                                                               \
        }                                                                               \
    } while (0)
/*
static int entropy_source(void *data, uint8_t *output, size_t len, size_t *olen)
{
    uint32_t seed;
    seed = sys_rand32_get();
    if (len > sizeof(seed)) {
        len = sizeof(seed);
    }
    memcpy(output, &seed, len);
    *olen = len;
    return 0;
}*/

static void dump_buf(char *info, uint8_t *buf, uint32_t len)
{
    mbedtls_printf("%s", info);
    for (int i = 0; i < len; i++) {
        mbedtls_printf("%s%02X%s", i % 16 == 0 ? "\n     " : " ",
                       buf[i], i == len - 1 ? "\n" : "");
    }
}

void mbedtls_ecdh_test(void)
{
    int ret = 0;
    size_t olen;
    uint8_t buf[65];
    mbedtls_ecp_group grp;
    mbedtls_mpi cli_secret, srv_secret;
    mbedtls_mpi cli_pri, srv_pri;
    mbedtls_ecp_point cli_pub, srv_pub;
    mbedtls_entropy_context entropy;
    mbedtls_ctr_drbg_context ctr_drbg;
    const char *pers = "simple_ecdh";
    uint32_t start_time;

    mbedtls_mpi_init(&cli_pri); //
    mbedtls_mpi_init(&srv_pri);
    mbedtls_mpi_init(&cli_secret);
    mbedtls_mpi_init(&srv_secret);
    mbedtls_ecp_group_init(&grp);     //��ʼ����Բ����Ⱥ�ṹ��
    mbedtls_ecp_point_init(&cli_pub); //��ʼ����Բ���ߵ�ṹ�� cli
    mbedtls_ecp_point_init(&srv_pub); //��ʼ����Բ���ߵ�ṹ�� srv
    mbedtls_entropy_init(&entropy);   //��ʼ���ؽṹ��
    mbedtls_ctr_drbg_init(&ctr_drbg); //��ʼ��������ṹ��
    /*
    mbedtls_entropy_add_source(&entropy, entropy_source, NULL,
                       MBEDTLS_ENTROPY_MAX_GATHER, MBEDTLS_ENTROPY_SOURCE_STRONG);*/
    mbedtls_ctr_drbg_seed(&ctr_drbg, mbedtls_entropy_func, &entropy,
                          pers, strlen(pers));
    mbedtls_printf("setup rng ... ok\r\n");

    //������Բ���ߣ�ѡ��SECP256R1
    ret = mbedtls_ecp_group_load(&grp, MBEDTLS_ECP_DP_SECP256R1);
    mbedtls_printf("select ecp group SECP256R1 ... ok\r\n");
    //cli���ɹ�������
    start_time = bflb_mtimer_get_time_ms();
    ret = mbedtls_ecdh_gen_public(&grp,     //��Բ���߽ṹ��
                                  &cli_pri, //���cli˽�ܲ���d
                                  &cli_pub, //���cli��������Q
                                  mbedtls_ctr_drbg_random, &ctr_drbg);
    assert_exit(ret == 0, ret);
    printf("Get public key time=%dms\r\n", (unsigned int)(bflb_mtimer_get_time_ms() - start_time));
    mbedtls_ecp_point_write_binary(&grp, &cli_pub, //��cli�Ĺ�������������buf��
                                   MBEDTLS_ECP_PF_UNCOMPRESSED, &olen, buf, sizeof(buf));
    dump_buf("1. ecdh client generate public parameter:", buf, olen);

    //srv���ɹ�������
    ret = mbedtls_ecdh_gen_public(&grp,     //��Բ���߽ṹ��
                                  &srv_pri, //���srv˽�ܲ���d
                                  &srv_pub, //���srv��������Q
                                  mbedtls_ctr_drbg_random, &ctr_drbg);
    assert_exit(ret == 0, ret);
    mbedtls_ecp_point_write_binary(&grp, &srv_pub, //��srv�Ĺ�������������buf��
                                   MBEDTLS_ECP_PF_UNCOMPRESSED, &olen, buf, sizeof(buf));
    dump_buf("2. ecdh server generate public parameter:", buf, olen);
    //cli���㹲����Կ
    start_time = bflb_mtimer_get_time_ms();
    ret = mbedtls_ecdh_compute_shared(&grp,        //��Բ���߽ṹ��
                                      &cli_secret, //cli������Ĺ�����Կ
                                      &srv_pub,    //����srv��������Q
                                      &cli_pri,    //����cli�����˽�ܲ���d
                                      mbedtls_ctr_drbg_random, &ctr_drbg);
    assert_exit(ret == 0, ret);
    printf("Get share key time=%dms\r\n", (unsigned int)(bflb_mtimer_get_time_ms() - start_time));
    //��cli������Ĺ�����Կ����buf��
    mbedtls_mpi_write_binary(&cli_secret, buf, mbedtls_mpi_size(&cli_secret));
    dump_buf("3. ecdh client generate secret:", buf, mbedtls_mpi_size(&cli_secret));

    //srv���㹲����Կ
    ret = mbedtls_ecdh_compute_shared(&grp,        //��Բ���߽ṹ��
                                      &srv_secret, //srv������Ĺ�����Կ
                                      &cli_pub,    //����cli��������Q
                                      &srv_pri,    //����srv�����˽�ܲ���d
                                      mbedtls_ctr_drbg_random, &ctr_drbg);
    assert_exit(ret == 0, ret);
    //��srv������Ĺ�����Կ����buf��
    mbedtls_mpi_write_binary(&srv_secret, buf, mbedtls_mpi_size(&srv_secret));
    dump_buf("4. ecdh server generate secret:", buf, mbedtls_mpi_size(&srv_secret));

    //�Ƚ�2�������Ƿ����
    ret = mbedtls_mpi_cmp_mpi(&cli_secret, &srv_secret);
    assert_exit(ret == 0, ret);
    mbedtls_printf("  5. ecdh checking secrets ... ok\n");

cleanup:
    mbedtls_mpi_free(&cli_pri);
    mbedtls_mpi_free(&srv_pri);
    mbedtls_mpi_free(&cli_secret);
    mbedtls_mpi_free(&srv_secret);
    mbedtls_ecp_group_free(&grp);
    mbedtls_ecp_point_free(&cli_pub);
    mbedtls_ecp_point_free(&srv_pub);
    mbedtls_entropy_free(&entropy);
    mbedtls_ctr_drbg_free(&ctr_drbg);
}

void mbedtls_ecdsa_test()
{
    int ret = 0;
    char buf[97];
    uint8_t hash[32], msg[100];
    uint8_t *pers = "simple_ecdsa";
    size_t rlen, slen, qlen, dlen;
    uint32_t start_time;

    memset(msg, 0x12, sizeof(msg));

    mbedtls_mpi r, s;
    mbedtls_ecdsa_context ctx;
    mbedtls_md_context_t md_ctx;
    mbedtls_entropy_context entropy;
    mbedtls_ctr_drbg_context ctr_drbg;

    mbedtls_mpi_init(&r);
    mbedtls_mpi_init(&s);
    mbedtls_ecdsa_init(&ctx); //��ʼ��ECDSA�ṹ��
    mbedtls_entropy_init(&entropy);
    mbedtls_ctr_drbg_init(&ctr_drbg);
    /*
    mbedtls_entropy_add_source(&entropy, entropy_source, NULL,
                   MBEDTLS_ENTROPY_MAX_GATHER, MBEDTLS_ENTROPY_SOURCE_STRONG);*/
    ret = mbedtls_ctr_drbg_seed(&ctr_drbg, mbedtls_entropy_func, &entropy,
                                (const uint8_t *)pers, strlen(pers));
    assert_exit(ret == 0, ret);
    mbedtls_printf("setup rng ... ok\r\n");

    mbedtls_md_init(&md_ctx);
    mbedtls_md(mbedtls_md_info_from_type(MBEDTLS_MD_SHA256), msg, sizeof(msg), hash);
    mbedtls_printf("1. hash msg ... ok\n"); //�����msg��hashֵ
    //����ECDSA��Կ��
    ret = mbedtls_ecdsa_genkey(&ctx, MBEDTLS_ECP_DP_SECP256R1, //ѡ��SECP256R1
                               mbedtls_ctr_drbg_random, &ctr_drbg);
    assert_exit(ret == 0, ret);
    mbedtls_ecp_point_write_binary(&ctx.grp, &ctx.Q,
                                   MBEDTLS_ECP_PF_UNCOMPRESSED, &qlen, buf, sizeof(buf));
    dlen = mbedtls_mpi_size(&ctx.d);
    mbedtls_mpi_write_binary(&ctx.d, buf + qlen, dlen);
    dump_buf("2. ecdsa generate keypair:", buf, qlen + dlen);
    //ECDSAǩ�����õ�r , s
    start_time = bflb_mtimer_get_time_ms();
    ret = mbedtls_ecdsa_sign(&ctx.grp, &r, &s, &ctx.d,
                             hash, sizeof(hash), mbedtls_ctr_drbg_random, &ctr_drbg);
    assert_exit(ret == 0, ret);
    printf("ECDSA sign time=%dms\r\n", (unsigned int)bflb_mtimer_get_time_ms() - start_time);

    rlen = mbedtls_mpi_size(&r);
    slen = mbedtls_mpi_size(&s);
    mbedtls_mpi_write_binary(&r, buf, rlen);
    mbedtls_mpi_write_binary(&s, buf + rlen, slen);
    dump_buf("3. ecdsa generate signature:", buf, rlen + slen);
    //ECDSA��ǩ������0��ʾ��֤�ɹ�
    start_time = bflb_mtimer_get_time_ms();
    ret = mbedtls_ecdsa_verify(&ctx.grp, hash, sizeof(hash), &ctx.Q, &r, &s);
    assert_exit(ret == 0, ret);
    printf("ECDSA verify time=%dms\r\n", (unsigned int)bflb_mtimer_get_time_ms() - start_time);
    mbedtls_printf("4. ecdsa verify signature ... ok\r\n");

cleanup:
    mbedtls_mpi_free(&r);
    mbedtls_mpi_free(&s);
    mbedtls_md_free(&md_ctx);
    mbedtls_ecdsa_free(&ctx);
    mbedtls_ctr_drbg_free(&ctr_drbg);
    mbedtls_entropy_free(&entropy);
}

void mbedtls_aes_test()
{
    mbedtls_aes_context ctx;
    uint64_t start_time;
    size_t offset;
    unsigned char stream_block[16];

    for (uint32_t i = 0; i < 16 * 1024; i++) {
        aes_input_buf[i] = i & 0xff;
    }

    mbedtls_aes_init(&ctx);

    for (uint32_t i = 1; i <= 1; i++) {
        printf("test aes ecb 128 \r\n");

        mbedtls_aes_setkey_enc(&ctx, key, 128);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ecb(&ctx, MBEDTLS_AES_ENCRYPT, aes_input_buf, aes_enc_buf);
        printf("aes ecb 128 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_aes_setkey_dec(&ctx, key, 128);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ecb(&ctx, MBEDTLS_AES_DECRYPT, aes_enc_buf, aes_dec_buf);
        printf("aes ecb 128 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);

        printf("test aes ecb 192 \r\n");
        mbedtls_aes_setkey_enc(&ctx, key, 192);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ecb(&ctx, MBEDTLS_AES_ENCRYPT, aes_input_buf, aes_enc_buf);
        printf("aes ecb 192 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_aes_setkey_dec(&ctx, key, 192);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ecb(&ctx, MBEDTLS_AES_DECRYPT, aes_enc_buf, aes_dec_buf);
        printf("aes ecb 192 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);

        printf("test aes ecb 256 \r\n");
        mbedtls_aes_setkey_enc(&ctx, key, 256);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ecb(&ctx, MBEDTLS_AES_ENCRYPT, aes_input_buf, aes_enc_buf);
        printf("aes ecb 256 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_aes_setkey_dec(&ctx, key, 256);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ecb(&ctx, MBEDTLS_AES_DECRYPT, aes_enc_buf, aes_dec_buf);
        printf("aes ecb 256 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);
    }

    for (uint32_t i = 1000; i <= 1000; i++) {
        printf("test aes cbc 128 \r\n");

        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 128);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_cbc(&ctx, MBEDTLS_AES_ENCRYPT, 16 * i, aes_iv, aes_input_buf, aes_enc_buf);
        printf("aes cbc 128 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_dec(&ctx, key, 128);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_cbc(&ctx, MBEDTLS_AES_DECRYPT, 16 * i, aes_iv, aes_enc_buf, aes_dec_buf);
        printf("aes cbc 128 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);

        printf("test aes cbc 192 \r\n");
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 192);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_cbc(&ctx, MBEDTLS_AES_ENCRYPT, 16 * i, aes_iv, aes_input_buf, aes_enc_buf);
        printf("aes cbc 192 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_dec(&ctx, key, 192);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_cbc(&ctx, MBEDTLS_AES_DECRYPT, 16 * i, aes_iv, aes_enc_buf, aes_dec_buf);
        printf("aes cbc 192 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);

        printf("test aes cbc 256 \r\n");
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 256);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_cbc(&ctx, MBEDTLS_AES_ENCRYPT, 16 * i, aes_iv, aes_input_buf, aes_enc_buf);
        printf("aes cbc 256 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_dec(&ctx, key, 256);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_cbc(&ctx, MBEDTLS_AES_DECRYPT, 16 * i, aes_iv, aes_enc_buf, aes_dec_buf);
        printf("aes cbc 256 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);
    }

    for (uint32_t i = 1000; i <= 1000; i++) {
        printf("test aes ctr 128 \r\n");

        offset = 0;
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 128);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ctr(&ctx, 16 * i, &offset, aes_iv, stream_block, aes_input_buf, aes_enc_buf);
        printf("aes ctr 128 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        offset = 0;
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 128);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ctr(&ctx, 16 * i, &offset, aes_iv, stream_block, aes_enc_buf, aes_dec_buf);
        printf("aes ctr 128 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);

        printf("test aes ctr 192 \r\n");
        offset = 0;
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 192);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ctr(&ctx, 16 * i, &offset, aes_iv, stream_block, aes_input_buf, aes_enc_buf);
        printf("aes ctr 192 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        offset = 0;
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 192);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ctr(&ctx, 16 * i, &offset, aes_iv, stream_block, aes_enc_buf, aes_dec_buf);
        printf("aes ctr 192 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);

        printf("test aes ctr 256 \r\n");
        offset = 0;
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 256);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ctr(&ctx, 16 * i, &offset, aes_iv, stream_block, aes_input_buf, aes_enc_buf);
        printf("aes ctr 256 block:%d enc cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        offset = 0;
        memset(aes_iv, 0, 16);
        mbedtls_aes_setkey_enc(&ctx, key, 256);
        start_time = bflb_mtimer_get_time_us();
        mbedtls_aes_crypt_ctr(&ctx, 16 * i, &offset, aes_iv, stream_block, aes_enc_buf, aes_dec_buf);
        printf("aes ctr 256 block:%d dec cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
        mbedtls_check(i);
    }
}

void mbedtls_sha_test()
{
    uint64_t start_time;

    for (uint32_t i = 0; i < 16 * 1024; i++) {
        sha_input_buf[i] = i & 0xff;
    }

    for (uint32_t i = 1000; i <= 1000; i++) {
        start_time = bflb_mtimer_get_time_us();
        mbedtls_sha1(sha_input_buf, 16 * i, sha_output_buf);
        printf("sha1 block:%d cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
    }

    for (uint32_t i = 1000; i <= 1000; i++) {
        start_time = bflb_mtimer_get_time_us();
        mbedtls_sha256(sha_input_buf, 16 * i, sha_output_buf, 0);
        printf("sha256 block:%d cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
    }

    for (uint32_t i = 1000; i <= 1000; i++) {
        start_time = bflb_mtimer_get_time_us();
        mbedtls_sha512(sha_input_buf, 16 * i, sha_output_buf, 0);
        printf("sha512 block:%d cost time:%d us\r\n", i, (uint32_t)(bflb_mtimer_get_time_us() - start_time));
    }

    printf("mbedtls test success\r\n");
}

int main(void)
{
    board_init();

    // mbedtls_aes_self_test(1);
    // mbedtls_sha1_self_test(1);
    // mbedtls_sha256_self_test(1);
    // mbedtls_sha512_self_test(1);

    printf("\r\n=========== ecdh test ================\r\n");
    mbedtls_ecdh_test();
    printf("\r\n=========== ecdsa test ================\r\n");
    mbedtls_ecdsa_test();
    printf("\r\n=========== aes test ================\r\n");
    mbedtls_aes_test();
    printf("\r\n=========== sha test ================\r\n");
    mbedtls_sha_test();

    while (1) {
        bflb_mtimer_delay_ms(1000);
    }
}
