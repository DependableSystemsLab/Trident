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
include lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/depend.make

# Include the progress variables for this target.
include lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/flags.make

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/flags.make
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmLexer.cpp
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenRegisterInfo.h.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenRegisterNames.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenRegisterInfo.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenDisassemblerTables.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenInstrNames.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenInstrInfo.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenAsmWriter.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenAsmWriter1.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenAsmMatcher.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenDAGISel.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenFastISel.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenCallingConv.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenSubtarget.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o: lib/Target/X86/X86GenEDInfo.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o"
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o -c /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmLexer.cpp

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.i"
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmLexer.cpp > CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.i

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.s"
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmLexer.cpp -o CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.s

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.requires:

.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.requires

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.provides: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.requires
	$(MAKE) -f lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/build.make lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.provides.build
.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.provides

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.provides.build: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o


lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/flags.make
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmParser.cpp
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenRegisterInfo.h.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenRegisterNames.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenRegisterInfo.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenDisassemblerTables.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenInstrNames.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenInstrInfo.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenAsmWriter.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenAsmWriter1.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenAsmMatcher.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenDAGISel.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenFastISel.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenCallingConv.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenSubtarget.inc
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o: lib/Target/X86/X86GenEDInfo.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o"
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o -c /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmParser.cpp

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.i"
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmParser.cpp > CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.i

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.s"
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gpli/llvm-2.9/lib/Target/X86/AsmParser/X86AsmParser.cpp -o CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.s

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.requires:

.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.requires

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.provides: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.requires
	$(MAKE) -f lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/build.make lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.provides.build
.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.provides

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.provides.build: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o


# Object files for target LLVMX86AsmParser
LLVMX86AsmParser_OBJECTS = \
"CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o" \
"CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o"

# External object files for target LLVMX86AsmParser
LLVMX86AsmParser_EXTERNAL_OBJECTS =

lib/libLLVMX86AsmParser.a: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o
lib/libLLVMX86AsmParser.a: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o
lib/libLLVMX86AsmParser.a: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/build.make
lib/libLLVMX86AsmParser.a: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gpli/llvm-2.9-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../../libLLVMX86AsmParser.a"
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/LLVMX86AsmParser.dir/cmake_clean_target.cmake
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMX86AsmParser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/build: lib/libLLVMX86AsmParser.a

.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/build

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/requires: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmLexer.cpp.o.requires
lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/requires: lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/X86AsmParser.cpp.o.requires

.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/requires

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/clean:
	cd /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/LLVMX86AsmParser.dir/cmake_clean.cmake
.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/clean

lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/depend:
	cd /home/gpli/llvm-2.9-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gpli/llvm-2.9 /home/gpli/llvm-2.9/lib/Target/X86/AsmParser /home/gpli/llvm-2.9-build /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser /home/gpli/llvm-2.9-build/lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/X86/AsmParser/CMakeFiles/LLVMX86AsmParser.dir/depend

