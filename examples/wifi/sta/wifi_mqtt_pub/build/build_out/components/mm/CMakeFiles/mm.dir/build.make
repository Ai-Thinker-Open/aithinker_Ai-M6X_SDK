# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/tools/cmake/bin/cmake

# The command to remove a file.
RM = /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/tools/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build

# Include any dependencies generated for this target.
include build_out/components/mm/CMakeFiles/mm.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include build_out/components/mm/CMakeFiles/mm.dir/compiler_depend.make

# Include the progress variables for this target.
include build_out/components/mm/CMakeFiles/mm.dir/progress.make

# Include the compile flags for this target's objects.
include build_out/components/mm/CMakeFiles/mm.dir/flags.make

build_out/components/mm/CMakeFiles/mm.dir/mem.c.o: build_out/components/mm/CMakeFiles/mm.dir/flags.make
build_out/components/mm/CMakeFiles/mm.dir/mem.c.o: /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/mem.c
build_out/components/mm/CMakeFiles/mm.dir/mem.c.o: build_out/components/mm/CMakeFiles/mm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object build_out/components/mm/CMakeFiles/mm.dir/mem.c.o"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT build_out/components/mm/CMakeFiles/mm.dir/mem.c.o -MF CMakeFiles/mm.dir/mem.c.o.d -o CMakeFiles/mm.dir/mem.c.o -c /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/mem.c

build_out/components/mm/CMakeFiles/mm.dir/mem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mm.dir/mem.c.i"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/mem.c > CMakeFiles/mm.dir/mem.c.i

build_out/components/mm/CMakeFiles/mm.dir/mem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mm.dir/mem.c.s"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/mem.c -o CMakeFiles/mm.dir/mem.c.s

build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.o: build_out/components/mm/CMakeFiles/mm.dir/flags.make
build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.o: /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/tlsf.c
build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.o: build_out/components/mm/CMakeFiles/mm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.o"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.o -MF CMakeFiles/mm.dir/tlsf/tlsf.c.o.d -o CMakeFiles/mm.dir/tlsf/tlsf.c.o -c /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/tlsf.c

build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mm.dir/tlsf/tlsf.c.i"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/tlsf.c > CMakeFiles/mm.dir/tlsf/tlsf.c.i

build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mm.dir/tlsf/tlsf.c.s"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/tlsf.c -o CMakeFiles/mm.dir/tlsf/tlsf.c.s

build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o: build_out/components/mm/CMakeFiles/mm.dir/flags.make
build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o: /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/bflb_tlsf.c
build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o: build_out/components/mm/CMakeFiles/mm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o -MF CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o.d -o CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o -c /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/bflb_tlsf.c

build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.i"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/bflb_tlsf.c > CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.i

build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.s"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/toolchain/bin/riscv64-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm/tlsf/bflb_tlsf.c -o CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.s

# Object files for target mm
mm_OBJECTS = \
"CMakeFiles/mm.dir/mem.c.o" \
"CMakeFiles/mm.dir/tlsf/tlsf.c.o" \
"CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o"

# External object files for target mm
mm_EXTERNAL_OBJECTS =

build_out/lib/libmm.a: build_out/components/mm/CMakeFiles/mm.dir/mem.c.o
build_out/lib/libmm.a: build_out/components/mm/CMakeFiles/mm.dir/tlsf/tlsf.c.o
build_out/lib/libmm.a: build_out/components/mm/CMakeFiles/mm.dir/tlsf/bflb_tlsf.c.o
build_out/lib/libmm.a: build_out/components/mm/CMakeFiles/mm.dir/build.make
build_out/lib/libmm.a: build_out/components/mm/CMakeFiles/mm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library ../../lib/libmm.a"
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && $(CMAKE_COMMAND) -P CMakeFiles/mm.dir/cmake_clean_target.cmake
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
build_out/components/mm/CMakeFiles/mm.dir/build: build_out/lib/libmm.a
.PHONY : build_out/components/mm/CMakeFiles/mm.dir/build

build_out/components/mm/CMakeFiles/mm.dir/clean:
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm && $(CMAKE_COMMAND) -P CMakeFiles/mm.dir/cmake_clean.cmake
.PHONY : build_out/components/mm/CMakeFiles/mm.dir/clean

build_out/components/mm/CMakeFiles/mm.dir/depend:
	cd /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/components/mm /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm /home/seahi/workspace/Ai-M6x/AiPi-Open-Kits/aithinker_Ai-M6X_SDK/examples/wifi/sta/wifi_mqtt_pub/build/build_out/components/mm/CMakeFiles/mm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : build_out/components/mm/CMakeFiles/mm.dir/depend

