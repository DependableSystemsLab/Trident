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
include unittests/CMakeFiles/UtilsTests.dir/depend.make

# Include the progress variables for this target.
include unittests/CMakeFiles/UtilsTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/CMakeFiles/UtilsTests.dir/flags.make

unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o: unittests/CMakeFiles/UtilsTests.dir/flags.make
unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o: /home/gpli/llvm-2.9/unittests/Transforms/Utils/Cloning.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o"
	cd /home/gpli/llvm-2.9-build/unittests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o -c /home/gpli/llvm-2.9/unittests/Transforms/Utils/Cloning.cpp

unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.i"
	cd /home/gpli/llvm-2.9-build/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/unittests/Transforms/Utils/Cloning.cpp > CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.i

unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.s"
	cd /home/gpli/llvm-2.9-build/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/unittests/Transforms/Utils/Cloning.cpp -o CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.s

unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.requires:

.PHONY : unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.requires

unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.provides: unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.requires
	$(MAKE) -f unittests/CMakeFiles/UtilsTests.dir/build.make unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.provides.build
.PHONY : unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.provides

unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.provides.build: unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o


# Object files for target UtilsTests
UtilsTests_OBJECTS = \
"CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o"

# External object files for target UtilsTests
UtilsTests_EXTERNAL_OBJECTS =

unittests/Transforms/Utils/UtilsTests: unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o
unittests/Transforms/Utils/UtilsTests: unittests/CMakeFiles/UtilsTests.dir/build.make
unittests/Transforms/Utils/UtilsTests: lib/libgtest.a
unittests/Transforms/Utils/UtilsTests: lib/libgtest_main.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMSupport.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMInterpreter.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMBitWriter.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMBitReader.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMAsmParser.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMJIT.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMX86CodeGen.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMX86AsmParser.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMX86Disassembler.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMExecutionEngine.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMAsmPrinter.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMSelectionDAG.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMX86AsmPrinter.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMX86Info.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMMCParser.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMCodeGen.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMX86Utils.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMScalarOpts.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMInstCombine.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMTransformUtils.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMipa.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMAnalysis.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMTarget.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMCore.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMMC.a
unittests/Transforms/Utils/UtilsTests: lib/libLLVMSupport.a
unittests/Transforms/Utils/UtilsTests: unittests/CMakeFiles/UtilsTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Transforms/Utils/UtilsTests"
	cd /home/gpli/llvm-2.9-build/unittests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UtilsTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/CMakeFiles/UtilsTests.dir/build: unittests/Transforms/Utils/UtilsTests

.PHONY : unittests/CMakeFiles/UtilsTests.dir/build

unittests/CMakeFiles/UtilsTests.dir/requires: unittests/CMakeFiles/UtilsTests.dir/Transforms/Utils/Cloning.cpp.o.requires

.PHONY : unittests/CMakeFiles/UtilsTests.dir/requires

unittests/CMakeFiles/UtilsTests.dir/clean:
	cd /home/gpli/llvm-2.9-build/unittests && $(CMAKE_COMMAND) -P CMakeFiles/UtilsTests.dir/cmake_clean.cmake
.PHONY : unittests/CMakeFiles/UtilsTests.dir/clean

unittests/CMakeFiles/UtilsTests.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/unittests /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/unittests /home/gpli/llvm-2.9-build/unittests/CMakeFiles/UtilsTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/CMakeFiles/UtilsTests.dir/depend

