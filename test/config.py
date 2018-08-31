import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC="llvm-gcc"
trident_dir = ""

# Update the paths according to your environemnt
OPT= trident_dir + "llvm-2.9-build/bin/opt"  
LLVMLINK= trident_dir + "llvm-2.9-build/bin/llvm-link" 
LLVMPASS_FOLDER= trident_dir + "llvm-2.9-build/lib/" 
LLI= trident_dir + "/llvm-2.9-build/bin/lli"
PYTHON="python"
