# This file provides information and services to the final user.

set(LLVM_PACKAGE_VERSION 2.9)

set(LLVM_COMMON_DEPENDS intrinsics_gen;llvm-config.target;llvmlibdeps.target)

set_property( GLOBAL PROPERTY LLVM_LIBS "LLVMSupport;LLVMCore;LLVMCodeGen;LLVMSelectionDAG;LLVMAsmPrinter;LLVMBitReader;LLVMBitWriter;LLVMTransformUtils;LLVMInstrumentation;LLVMInstCombine;LLVMScalarOpts;LLVMipo;LLVMLinker;LLVMAnalysis;LLVMipa;LLVMMC;LLVMMCParser;LLVMMCDisassembler;LLVMObject;LLVMExecutionEngine;LLVMInterpreter;LLVMJIT;LLVMMCJIT;LLVMTarget;LLVMAlphaCodeGen;LLVMAlphaInfo;LLVMARMCodeGen;LLVMARMInfo;LLVMARMAsmParser;LLVMARMDisassembler;LLVMARMAsmPrinter;LLVMBlackfinCodeGen;LLVMBlackfinInfo;LLVMCBackend;LLVMCBackendInfo;LLVMCellSPUCodeGen;LLVMCellSPUInfo;LLVMCppBackend;LLVMCppBackendInfo;LLVMMipsCodeGen;LLVMMipsInfo;LLVMMBlazeCodeGen;LLVMMBlazeAsmParser;LLVMMBlazeDisassembler;LLVMMBlazeAsmPrinter;LLVMMBlazeInfo;LLVMMSP430CodeGen;LLVMMSP430AsmPrinter;LLVMMSP430Info;LLVMPowerPCCodeGen;LLVMPowerPCAsmPrinter;LLVMPowerPCInfo;LLVMPTXCodeGen;LLVMPTXInfo;LLVMSparcCodeGen;LLVMSparcInfo;LLVMSystemZCodeGen;LLVMSystemZInfo;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Disassembler;LLVMX86AsmPrinter;LLVMX86Info;LLVMX86Utils;LLVMXCoreCodeGen;LLVMXCoreInfo;LLVMAsmParser;LLVMArchive;EnhancedDisassembly;gtest;gtest_main")

set(LLVM_ALL_TARGETS Alpha;ARM;Blackfin;CBackend;CellSPU;CppBackend;Mips;MBlaze;MSP430;PowerPC;PTX;Sparc;SystemZ;X86;XCore)

set(LLVM_TARGETS_TO_BUILD Alpha;ARM;Blackfin;CBackend;CellSPU;CppBackend;Mips;MBlaze;MSP430;PowerPC;PTX;Sparc;SystemZ;X86;XCore)

set(TARGET_TRIPLE "x86_64-unknown-linux-gnu")

set(LLVM_TOOLS_BINARY_DIR /home/gpli/llvm-2.9-build/bin)

set(LLVM_ENABLE_THREADS ON)

set(LLVM_NATIVE_ARCH X86)

set(LLVM_ENABLE_PIC ON)

set(LLVM_ENABLE_THREADS @LLVM_ENABLE_THREADS)

set(HAVE_LIBDL 1)
set(HAVE_LIBPTHREAD @HAVE_LIBPTHREAD)

# We try to include using the current setting of CMAKE_MODULE_PATH,
# which suppossedly was filled by the user with the directory where
# this file was installed:
include( LLVMConfig OPTIONAL RESULT_VARIABLE LLVMCONFIG_INCLUDED )

# If failed, we assume that this is an un-installed build:
if( NOT LLVMCONFIG_INCLUDED )
  set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}
    "/home/gpli/llvm-2.9/cmake/modules")
  include( LLVMConfig )
endif()

