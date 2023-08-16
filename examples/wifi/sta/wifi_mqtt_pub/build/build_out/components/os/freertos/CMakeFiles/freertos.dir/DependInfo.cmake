
# Consider dependencies only in project.
set(CMAKE_DEPENDS_IN_PROJECT_ONLY OFF)

# The set of languages for which implicit dependencies are needed:
set(CMAKE_DEPENDS_LANGUAGES
  "ASM"
  )
# The set of files for implicit dependencies of each language:
set(CMAKE_DEPENDS_CHECK_ASM
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/portable/GCC/RISC-V/common/portASM.S" "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/os/freertos/CMakeFiles/freertos.dir/portable/GCC/RISC-V/common/portASM.S.o"
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
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/croutine.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/croutine.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/croutine.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/event_groups.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/event_groups.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/event_groups.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/freertos_port.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/freertos_port.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/freertos_port.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/list.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/list.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/list.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/portable/GCC/RISC-V/common/port.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/portable/GCC/RISC-V/common/port.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/portable/GCC/RISC-V/common/port.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/portable/MemMang/heap_3.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/portable/MemMang/heap_3.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/portable/MemMang/heap_3.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_clock.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_clock.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_clock.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_mqueue.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_mqueue.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_mqueue.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_pthread.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_pthread_barrier.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread_barrier.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread_barrier.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_pthread_cond.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread_cond.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread_cond.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_pthread_mutex.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread_mutex.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_pthread_mutex.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_sched.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_sched.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_sched.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_semaphore.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_semaphore.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_semaphore.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_timer.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_timer.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_timer.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_unistd.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_unistd.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_unistd.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/posix/source/FreeRTOS_POSIX_utils.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_utils.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/posix/source/FreeRTOS_POSIX_utils.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/queue.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/queue.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/queue.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/tasks.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/tasks.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/tasks.c.o.d"
  "/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/os/freertos/timers.c" "build_out/components/os/freertos/CMakeFiles/freertos.dir/timers.c.o" "gcc" "build_out/components/os/freertos/CMakeFiles/freertos.dir/timers.c.o.d"
  )

# Targets to which this target links.
set(CMAKE_TARGET_LINKED_INFO_FILES
  )

# Fortran module output directory.
set(CMAKE_Fortran_TARGET_MODULE_DIR "")
