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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gpli/LLFI-src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gpli/LLFI-BUILD

# Utility rule file for config.

# Include the progress variables for this target.
include config/CMakeFiles/config.dir/progress.make

config/CMakeFiles/config: config/__init__.py
config/CMakeFiles/config: config/llvm_paths.py

config/__init__.py: /home/gpli/LLFI-src/config/__init__.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpli/LLFI-BUILD/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating __init__.py"
	cd /home/gpli/LLFI-BUILD/config && /usr/bin/cmake -E copy /home/gpli/LLFI-src/config/__init__.py /home/gpli/LLFI-BUILD/config/__init__.py

config/llvm_paths.py: /home/gpli/LLFI-src/config/llvm_paths.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gpli/LLFI-BUILD/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating llvm_paths.py"
	cd /home/gpli/LLFI-BUILD/config && /usr/bin/cmake -E copy /home/gpli/LLFI-src/config/llvm_paths.py /home/gpli/LLFI-BUILD/config/llvm_paths.py

config: config/CMakeFiles/config
config: config/__init__.py
config: config/llvm_paths.py
config: config/CMakeFiles/config.dir/build.make
.PHONY : config

# Rule to build all files generated by this target.
config/CMakeFiles/config.dir/build: config
.PHONY : config/CMakeFiles/config.dir/build

config/CMakeFiles/config.dir/clean:
	cd /home/gpli/LLFI-BUILD/config && $(CMAKE_COMMAND) -P CMakeFiles/config.dir/cmake_clean.cmake
.PHONY : config/CMakeFiles/config.dir/clean

config/CMakeFiles/config.dir/depend:
	cd /home/gpli/LLFI-BUILD && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/LLFI-src /home/gpli/LLFI-src/config /home/gpli/LLFI-BUILD /home/gpli/LLFI-BUILD/config /home/gpli/LLFI-BUILD/config/CMakeFiles/config.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : config/CMakeFiles/config.dir/depend

