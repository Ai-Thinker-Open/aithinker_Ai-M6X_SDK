#include "bflb_mtimer.h"
#if defined(BL602) || defined(BL702) || defined(BL702L)
#include <risc-v/e24/clic.h>
#else
#include <csi_core.h>
#endif

static void (*systick_callback)(void);
static uint64_t current_set_ticks = 0;

static void systick_isr(int irq, void *arg)
{
#if defined(BL702) || defined(BL602) || defined(BL702L)
    *(volatile uint64_t *)(CLIC_CTRL_BASE + CLIC_MTIMECMP_OFFSET) += current_set_ticks;
#else
    csi_coret_config(current_set_ticks, 7);
#endif
    systick_callback();
}

void bflb_mtimer_config(uint64_t ticks, void (*interruptfun)(void))
{
    bflb_irq_disable(7);

    current_set_ticks = ticks;
    systick_callback = interruptfun;
#if defined(BL702) || defined(BL602) || defined(BL702L)
    *(volatile uint64_t *)(CLIC_CTRL_BASE + CLIC_MTIMECMP_OFFSET) = (*(volatile uint64_t *)(CLIC_CTRL_BASE + CLIC_MTIME_OFFSET)) + ticks;
#else
    csi_coret_config_use(ticks, 7);
#endif

    bflb_irq_attach(7, systick_isr, NULL);
    bflb_irq_enable(7);
}

uint64_t bflb_mtimer_get_time_us()
{
    volatile uint64_t tmp_low, tmp_high, tmp_low1, tmp_high1;

    do {
#if defined(BL702) || defined(BL602) || defined(BL702L)
        tmp_high = getreg32(CLIC_CTRL_BASE + CLIC_MTIME_OFFSET + 4);
        tmp_low = getreg32(CLIC_CTRL_BASE + CLIC_MTIME_OFFSET);
        tmp_low1 = getreg32(CLIC_CTRL_BASE + CLIC_MTIME_OFFSET);
        tmp_high1 = getreg32(CLIC_CTRL_BASE + CLIC_MTIME_OFFSET + 4);
#else
        tmp_high = (uint64_t)csi_coret_get_valueh();
        tmp_low = (uint64_t)csi_coret_get_value();
        tmp_low1 = (uint64_t)csi_coret_get_value();
        tmp_high1 = (uint64_t)csi_coret_get_valueh();
#endif
    } while (tmp_low > tmp_low1 || tmp_high != tmp_high1);

    return (uint64_t)((tmp_high1 << 32) + tmp_low1);
}

uint64_t bflb_mtimer_get_time_ms()
{
    return bflb_mtimer_get_time_us() / 1000;
}

void bflb_mtimer_delay_us(uint32_t time)
{
    uint64_t start_time = bflb_mtimer_get_time_us();

    while (bflb_mtimer_get_time_us() - start_time < time) {
    }
}

void bflb_mtimer_delay_ms(uint32_t time)
{
    uint64_t start_time = bflb_mtimer_get_time_ms();

    while (bflb_mtimer_get_time_ms() - start_time < time) {
    }
}
