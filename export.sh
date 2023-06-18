export PATH=$PATH:$PWD/toolchain/bin
echo $PATH
riscv64-unknown-elf-gcc -v
chmod 755 $PWD/tools/cmake/bin/cmake
chmod 755 $PWD/tools/bflb_tools/bouffalo_flash_cube/BLFlashCommand-ubuntu 
chmod 755 $PWD/tools/bflb_tools/bflb_fw_post_proc/bflb_fw_post_proc-ubuntu
