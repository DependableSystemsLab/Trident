# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gpli/llvm-2.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gpli/llvm-2.9-build

# Include any dependencies generated for this target.
include utils/count/CMakeFiles/count.dir/depend.make

# Include the progress variables for this target.
include utils/count/CMakeFiles/count.dir/progress.make

# Include the compile flags for this target's objects.
include utils/count/CMakeFiles/count.dir/flags.make

utils/count/CMakeFiles/count.dir/count.c.o: utils/count/CMakeFiles/count.dir/flags.make
utils/count/CMakeFiles/count.dir/count.c.o: /home/gpli/llvm-2.9/utils/count/count.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object utils/count/CMakeFiles/count.dir/count.c.o"
	cd /home/gpli/llvm-2.9-build/utils/count && /usr/bin/gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/count.dir/count.c.o   -c /home/gpli/llvm-2.9/utils/count/count.c

utils/count/CMakeFiles/count.dir/count.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/count.dir/count.c.i"
	cd /home/gpli/llvm-2.9-build/utils/count && /usr/bin/gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/gpli/llvm-2.9/utils/count/count.c > CMakeFiles/count.dir/count.c.i

utils/count/CMakeFiles/count.dir/count.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/count.dir/count.c.s"
	cd /home/gpli/llvm-2.9-build/utils/count && /usr/bin/gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/gpli/llvm-2.9/utils/count/count.c -o CMakeFiles/count.dir/count.c.s

utils/count/CMakeFiles/count.dir/count.c.o.requires:

.PHONY : utils/count/CMakeFiles/count.dir/count.c.o.requires

utils/count/CMakeFiles/count.dir/count.c.o.provides: utils/count/CMakeFiles/count.dir/count.c.o.requires
	$(MAKE) -f utils/count/CMakeFiles/count.dir/build.make utils/count/CMakeFiles/count.dir/count.c.o.provides.build
.PHONY : utils/count/CMakeFiles/count.dir/count.c.o.provides

utils/count/CMakeFiles/count.dir/count.c.o.provides.build: utils/count/CMakeFiles/count.dir/count.c.o


# Object files for target count
count_OBJECTS = \
"CMakeFiles/count.dir/count.c.o"

# External object files for target count
count_EXTERNAL_OBJECTS =

bin/count: utils/count/CMakeFiles/count.dir/count.c.o
bin/count: utils/count/CMakeFiles/count.dir/build.make
bin/count: utils/count/CMakeFiles/count.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../../bin/count"
	cd /home/gpli/llvm-2.9-build/utils/count && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/count.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/count/CMakeFiles/count.dir/build: bin/count

.PHONY : utils/count/CMakeFiles/count.dir/build

utils/count/CMakeFiles/count.dir/requires: utils/count/CMakeFiles/count.dir/count.c.o.requires

.PHONY : utils/count/CMakeFiles/count.dir/requires

utils/count/CMakeFiles/count.dir/clean:
	cd /home/gpli/llvm-2.9-build/utils/count && $(CMAKE_COMMAND) -P CMakeFiles/count.dir/cmake_clean.cmake
.PHONY : utils/count/CMakeFiles/count.dir/clean

utils/count/CMakeFiles/count.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/utils/count /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/utils/count /home/gpli/llvm-2.9-build/utils/count/CMakeFiles/count.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/count/CMakeFiles/count.dir/depend

