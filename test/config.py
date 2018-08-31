import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC="llvm-gcc"
ROOT = ""

# Update the paths according to your environment
OPT= ROOT + "llvm-2.9-build/bin/opt"  
LLVMLINK= ROOT + "llvm-2.9-build/bin/llvm-link" 
LLVMPASS_FOLDER= ROOT + "llvm-2.9-build/lib/" 
LLI= ROOT + "/llvm-2.9-build/bin/lli"
PYTHON="python"
