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
include lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/depend.make

# Include the progress variables for this target.
include lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/flags.make

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o: lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/flags.make
lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o: /home/gpli/llvm-2.9/lib/Transforms/VmsizeProfile/Hello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/VmsizeProfile && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMVMS.dir/Hello.cpp.o -c /home/gpli/llvm-2.9/lib/Transforms/VmsizeProfile/Hello.cpp

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMVMS.dir/Hello.cpp.i"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/VmsizeProfile && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/lib/Transforms/VmsizeProfile/Hello.cpp > CMakeFiles/LLVMVMS.dir/Hello.cpp.i

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMVMS.dir/Hello.cpp.s"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/VmsizeProfile && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/lib/Transforms/VmsizeProfile/Hello.cpp -o CMakeFiles/LLVMVMS.dir/Hello.cpp.s

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.requires:

.PHONY : lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.requires

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.provides: lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.requires
	$(MAKE) -f lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/build.make lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.provides.build
.PHONY : lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.provides

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.provides.build: lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o


# Object files for target LLVMVMS
LLVMVMS_OBJECTS = \
"CMakeFiles/LLVMVMS.dir/Hello.cpp.o"

# External object files for target LLVMVMS
LLVMVMS_EXTERNAL_OBJECTS =

lib/LLVMVMS.so: lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o
lib/LLVMVMS.so: lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/build.make
lib/LLVMVMS.so: lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../LLVMVMS.so"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/VmsizeProfile && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMVMS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/build: lib/LLVMVMS.so

.PHONY : lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/build

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/requires: lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/Hello.cpp.o.requires

.PHONY : lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/requires

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/clean:
	cd /home/gpli/llvm-2.9-build/lib/Transforms/VmsizeProfile && $(CMAKE_COMMAND) -P CMakeFiles/LLVMVMS.dir/cmake_clean.cmake
.PHONY : lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/clean

lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/lib/Transforms/VmsizeProfile /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/lib/Transforms/VmsizeProfile /home/gpli/llvm-2.9-build/lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Transforms/VmsizeProfile/CMakeFiles/LLVMVMS.dir/depend
