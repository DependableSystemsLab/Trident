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
include lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/depend.make

# Include the progress variables for this target.
include lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/flags.make

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/flags.make
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: /home/gpli/llvm-2.9/lib/Target/MBlaze/InstPrinter/MBlazeInstPrinter.cpp
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenRegisterInfo.h.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenRegisterNames.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenRegisterInfo.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenInstrNames.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenInstrInfo.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenCodeEmitter.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenAsmWriter.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenAsmMatcher.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenDAGISel.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenCallingConv.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenSubtarget.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenIntrinsics.inc
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o: lib/Target/MBlaze/MBlazeGenEDInfo.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o"
	cd /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o -c /home/gpli/llvm-2.9/lib/Target/MBlaze/InstPrinter/MBlazeInstPrinter.cpp

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.i"
	cd /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/lib/Target/MBlaze/InstPrinter/MBlazeInstPrinter.cpp > CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.i

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.s"
	cd /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/lib/Target/MBlaze/InstPrinter/MBlazeInstPrinter.cpp -o CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.s

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.requires:

.PHONY : lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.requires

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.provides: lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.requires
	$(MAKE) -f lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/build.make lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.provides.build
.PHONY : lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.provides

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.provides.build: lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o


# Object files for target LLVMMBlazeAsmPrinter
LLVMMBlazeAsmPrinter_OBJECTS = \
"CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o"

# External object files for target LLVMMBlazeAsmPrinter
LLVMMBlazeAsmPrinter_EXTERNAL_OBJECTS =

lib/libLLVMMBlazeAsmPrinter.a: lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o
lib/libLLVMMBlazeAsmPrinter.a: lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/build.make
lib/libLLVMMBlazeAsmPrinter.a: lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMMBlazeAsmPrinter.a"
	cd /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMBlazeAsmPrinter.dir/cmake_clean_target.cmake
	cd /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMMBlazeAsmPrinter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/build: lib/libLLVMMBlazeAsmPrinter.a

.PHONY : lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/build

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/requires: lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/MBlazeInstPrinter.cpp.o.requires

.PHONY : lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/requires

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/clean:
	cd /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMBlazeAsmPrinter.dir/cmake_clean.cmake
.PHONY : lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/clean

lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/lib/Target/MBlaze/InstPrinter /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter /home/gpli/llvm-2.9-build/lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/MBlaze/InstPrinter/CMakeFiles/LLVMMBlazeAsmPrinter.dir/depend

