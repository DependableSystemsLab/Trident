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
include unittests/CMakeFiles/ExecutionEngineTests.dir/depend.make

# Include the progress variables for this target.
include unittests/CMakeFiles/ExecutionEngineTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/CMakeFiles/ExecutionEngineTests.dir/flags.make

unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o: unittests/CMakeFiles/ExecutionEngineTests.dir/flags.make
unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o: /home/gpli/llvm-2.9/unittests/ExecutionEngine/ExecutionEngineTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o"
	cd /home/gpli/llvm-2.9-build/unittests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o -c /home/gpli/llvm-2.9/unittests/ExecutionEngine/ExecutionEngineTest.cpp

unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.i"
	cd /home/gpli/llvm-2.9-build/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/unittests/ExecutionEngine/ExecutionEngineTest.cpp > CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.i

unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.s"
	cd /home/gpli/llvm-2.9-build/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/unittests/ExecutionEngine/ExecutionEngineTest.cpp -o CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.s

unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.requires:

.PHONY : unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.requires

unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.provides: unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.requires
	$(MAKE) -f unittests/CMakeFiles/ExecutionEngineTests.dir/build.make unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.provides.build
.PHONY : unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.provides

unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.provides.build: unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o


# Object files for target ExecutionEngineTests
ExecutionEngineTests_OBJECTS = \
"CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o"

# External object files for target ExecutionEngineTests
ExecutionEngineTests_EXTERNAL_OBJECTS =

unittests/ExecutionEngine/ExecutionEngineTests: unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o
unittests/ExecutionEngine/ExecutionEngineTests: unittests/CMakeFiles/ExecutionEngineTests.dir/build.make
unittests/ExecutionEngine/ExecutionEngineTests: lib/libgtest.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libgtest_main.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMSupport.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMInterpreter.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMBitWriter.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMBitReader.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMAsmParser.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMJIT.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMX86CodeGen.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMX86AsmParser.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMX86Disassembler.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMExecutionEngine.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMAsmPrinter.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMSelectionDAG.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMX86AsmPrinter.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMX86Info.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMMCParser.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMCodeGen.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMX86Utils.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMScalarOpts.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMInstCombine.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMTransformUtils.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMipa.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMAnalysis.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMTarget.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMCore.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMMC.a
unittests/ExecutionEngine/ExecutionEngineTests: lib/libLLVMSupport.a
unittests/ExecutionEngine/ExecutionEngineTests: unittests/CMakeFiles/ExecutionEngineTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ExecutionEngine/ExecutionEngineTests"
	cd /home/gpli/llvm-2.9-build/unittests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExecutionEngineTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/CMakeFiles/ExecutionEngineTests.dir/build: unittests/ExecutionEngine/ExecutionEngineTests

.PHONY : unittests/CMakeFiles/ExecutionEngineTests.dir/build

unittests/CMakeFiles/ExecutionEngineTests.dir/requires: unittests/CMakeFiles/ExecutionEngineTests.dir/ExecutionEngine/ExecutionEngineTest.cpp.o.requires

.PHONY : unittests/CMakeFiles/ExecutionEngineTests.dir/requires

unittests/CMakeFiles/ExecutionEngineTests.dir/clean:
	cd /home/gpli/llvm-2.9-build/unittests && $(CMAKE_COMMAND) -P CMakeFiles/ExecutionEngineTests.dir/cmake_clean.cmake
.PHONY : unittests/CMakeFiles/ExecutionEngineTests.dir/clean

unittests/CMakeFiles/ExecutionEngineTests.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/unittests /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/unittests /home/gpli/llvm-2.9-build/unittests/CMakeFiles/ExecutionEngineTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/CMakeFiles/ExecutionEngineTests.dir/depend

