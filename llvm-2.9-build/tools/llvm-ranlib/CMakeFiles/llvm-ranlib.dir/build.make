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
include tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/flags.make

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o: tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/flags.make
tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o: /home/gpli/llvm-2.9/tools/llvm-ranlib/llvm-ranlib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o"
	cd /home/gpli/llvm-2.9-build/tools/llvm-ranlib && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o -c /home/gpli/llvm-2.9/tools/llvm-ranlib/llvm-ranlib.cpp

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.i"
	cd /home/gpli/llvm-2.9-build/tools/llvm-ranlib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/tools/llvm-ranlib/llvm-ranlib.cpp > CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.i

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.s"
	cd /home/gpli/llvm-2.9-build/tools/llvm-ranlib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/tools/llvm-ranlib/llvm-ranlib.cpp -o CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.s

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.requires:

.PHONY : tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.requires

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.provides: tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.requires
	$(MAKE) -f tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/build.make tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.provides.build
.PHONY : tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.provides

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.provides.build: tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o


# Object files for target llvm-ranlib
llvm__ranlib_OBJECTS = \
"CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o"

# External object files for target llvm-ranlib
llvm__ranlib_EXTERNAL_OBJECTS =

bin/llvm-ranlib: tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o
bin/llvm-ranlib: tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/build.make
bin/llvm-ranlib: lib/libLLVMArchive.a
bin/llvm-ranlib: lib/libLLVMJIT.a
bin/llvm-ranlib: lib/libLLVMX86CodeGen.a
bin/llvm-ranlib: lib/libLLVMX86AsmParser.a
bin/llvm-ranlib: lib/libLLVMX86Disassembler.a
bin/llvm-ranlib: lib/libLLVMBitReader.a
bin/llvm-ranlib: lib/libLLVMExecutionEngine.a
bin/llvm-ranlib: lib/libLLVMAsmPrinter.a
bin/llvm-ranlib: lib/libLLVMSelectionDAG.a
bin/llvm-ranlib: lib/libLLVMX86AsmPrinter.a
bin/llvm-ranlib: lib/libLLVMX86Info.a
bin/llvm-ranlib: lib/libLLVMMCParser.a
bin/llvm-ranlib: lib/libLLVMCodeGen.a
bin/llvm-ranlib: lib/libLLVMX86Utils.a
bin/llvm-ranlib: lib/libLLVMScalarOpts.a
bin/llvm-ranlib: lib/libLLVMInstCombine.a
bin/llvm-ranlib: lib/libLLVMTransformUtils.a
bin/llvm-ranlib: lib/libLLVMipa.a
bin/llvm-ranlib: lib/libLLVMAnalysis.a
bin/llvm-ranlib: lib/libLLVMTarget.a
bin/llvm-ranlib: lib/libLLVMCore.a
bin/llvm-ranlib: lib/libLLVMMC.a
bin/llvm-ranlib: lib/libLLVMSupport.a
bin/llvm-ranlib: tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-ranlib"
	cd /home/gpli/llvm-2.9-build/tools/llvm-ranlib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-ranlib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/build: bin/llvm-ranlib

.PHONY : tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/build

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/requires: tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/llvm-ranlib.cpp.o.requires

.PHONY : tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/requires

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/clean:
	cd /home/gpli/llvm-2.9-build/tools/llvm-ranlib && $(CMAKE_COMMAND) -P CMakeFiles/llvm-ranlib.dir/cmake_clean.cmake
.PHONY : tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/clean

tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/tools/llvm-ranlib /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/tools/llvm-ranlib /home/gpli/llvm-2.9-build/tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-ranlib/CMakeFiles/llvm-ranlib.dir/depend

