# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gpli/llvm-2.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gpli/llvm-2.9-build

# Include any dependencies generated for this target.
include lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/depend.make

# Include the progress variables for this target.
include lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/flags.make

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o: lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/flags.make
lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o: /home/gpli/llvm-2.9/lib/Transforms/LogicLevel/Hello.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpli/llvm-2.9-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/LogicLevel && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/LLM.dir/Hello.cpp.o -c /home/gpli/llvm-2.9/lib/Transforms/LogicLevel/Hello.cpp

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLM.dir/Hello.cpp.i"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/LogicLevel && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/lib/Transforms/LogicLevel/Hello.cpp > CMakeFiles/LLM.dir/Hello.cpp.i

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLM.dir/Hello.cpp.s"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/LogicLevel && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/lib/Transforms/LogicLevel/Hello.cpp -o CMakeFiles/LLM.dir/Hello.cpp.s

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.requires:
.PHONY : lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.requires

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.provides: lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.requires
	$(MAKE) -f lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/build.make lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.provides.build
.PHONY : lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.provides

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.provides.build: lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o

# Object files for target LLM
LLM_OBJECTS = \
"CMakeFiles/LLM.dir/Hello.cpp.o"

# External object files for target LLM
LLM_EXTERNAL_OBJECTS =

lib/LLM.so: lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o
lib/LLM.so: lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/build.make
lib/LLM.so: lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../LLM.so"
	cd /home/gpli/llvm-2.9-build/lib/Transforms/LogicLevel && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/build: lib/LLM.so
.PHONY : lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/build

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/requires: lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/Hello.cpp.o.requires
.PHONY : lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/requires

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/clean:
	cd /home/gpli/llvm-2.9-build/lib/Transforms/LogicLevel && $(CMAKE_COMMAND) -P CMakeFiles/LLM.dir/cmake_clean.cmake
.PHONY : lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/clean

lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/lib/Transforms/LogicLevel /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/lib/Transforms/LogicLevel /home/gpli/llvm-2.9-build/lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Transforms/LogicLevel/CMakeFiles/LLM.dir/depend

