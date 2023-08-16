
# Consider dependencies only in project.
set(CMAKE_DEPENDS_IN_PROJECT_ONLY OFF)

# The set of languages for which implicit dependencies are needed:
set(CMAKE_DEPENDS_LANGUAGES
  "ASM"
  )
# The set of files for implicit dependencies of each language:
set(CMAKE_DEPENDS_CHECK_ASM
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/startup/riscv_fpu.S" "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/riscv_fpu.S.o"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/startup/start.S" "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/start.S.o"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/startup/vector.S" "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/vector.S.o"
  )
set(CMAKE_ASM_COMPILER_ID "GNU")

# Preprocessor definitions for this target.
set(CMAKE_TARGET_DEFINITIONS_ASM
  "ARCH_RISCV"
  "BFLB_TIMESTAMP_TIMEZONE=8"
  "BFLB_USE_HAL_DRIVER"
  "BFLB_USE_ROM_DRIVER"
  "BL616"
  "BOUFFALO_SDK"
  "CONFIG_CLI_CMD_ENABLE"
  "CONFIG_FREERTOS"
  "CONFIG_IRQ_NUM=80"
  "CONFIG_LIBC_FLOAT=1"
  "CONFIG_LIBC_FLOAT_EX=1"
  "CONFIG_LIBC_LONG_LONG=1"
  "CONFIG_LOG_LEVEL=3"
  "CONFIG_LWIP"
  "CONFIG_MAC_RXQ_DEPTH=12"
  "CONFIG_MAC_TXQ_DEPTH=16"
  "CONFIG_POSIX"
  "CONFIG_PSRAM"
  "CONFIG_SHELL"
  "CONFIG_STA_MAX=4"
  "CONFIG_TLSF"
  "CONFIG_VIF_MAX=2"
  "MBEDTLS_CONFIG_FILE=\"mbedtls_sample_config.h\""
  "MBEDTLS_NET_C"
  "RFPARAM_BL616"
  "WL_BL616=1"
  "WL_BL618M=0"
  "WL_WB03=0"
  "configSTACK_ALLOCATION_FROM_SEPARATE_HEAP=1"
  "default_interrupt_handler=freertos_risc_v_trap_handler"
  "portasmHANDLE_INTERRUPT=interrupt_entry"
  )

# The include file search paths:
set(CMAKE_ASM_TARGET_INCLUDE_PATH
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/bsp/board/bl616dk/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/crypto/mbedtls/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/crypto/mbedtls/mbedtls/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/crypto/mbedtls/port"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/crypto/mbedtls/port/platform"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/libc/newlib/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/libc/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/net/lib/mqtt/inc"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/net/lwip/lwip/system"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/net/lwip/lwip/src/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/net/lwip/lwip/src/include/compat/posix"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/net/lwip/lwip_apps/dhcpd/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/portable/GCC/RISC-V/common"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/portable/GCC/RISC-V/common/chip_specific_extensions/RV32I_CLINT_no_extensions"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/shell/."
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/utils/log"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/utils/ring_buffer"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/utils/bflb_block_pool"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/utils/bflb_timestamp"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/utils/getopt"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/wireless/wifi6/inc"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/wireless/wifi6/bl6_os_adapter/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/lhal/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/lhal/include/arch"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/lhal/include/arch/risc-v/t-head"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/lhal/include/arch/risc-v/t-head/Core/Include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/lhal/include/arch/risc-v/t-head/csi_dsp/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/lhal/config/bl616"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/lhal/src/flash"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/include"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/include/hardware"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/rf/inc"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/rfparam/Inc"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/."
  )

# The set of dependency files which are needed:
set(CMAKE_DEPENDS_DEPENDENCY_FILES
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/port/bl616_clock.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/port/bl616_clock.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/port/bl616_clock.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_aon.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_aon.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_aon.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_common.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_common.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_common.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_ef_cfg.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_ef_cfg.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_ef_cfg.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_mfg_efuse.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_mfg_efuse.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_mfg_efuse.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_mfg_flash.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_mfg_flash.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_mfg_flash.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_mfg_media.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_mfg_media.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_mfg_media.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_pm.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_pm.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_pm.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_psram.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_psram.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_psram.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_romapi_e907.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_romapi_e907.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_romapi_e907.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_romapi_patch.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_romapi_patch.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_romapi_patch.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_sdh.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_sdh.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_sdh.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/src/bl616_tzc_sec.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_tzc_sec.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/src/bl616_tzc_sec.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/startup/interrupt.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/interrupt.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/interrupt.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/startup/start_load.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/start_load.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/start_load.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/drivers/soc/bl616/std/startup/system_bl616.c" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/system_bl616.c.o" "gcc" "build_out/drivers/soc/bl616/std/CMakeFiles/std.dir/startup/system_bl616.c.o.d"
  )

# Targets to which this target links.
set(CMAKE_TARGET_LINKED_INFO_FILES
  )

# Fortran module output directory.
set(CMAKE_Fortran_TARGET_MODULE_DIR "")
