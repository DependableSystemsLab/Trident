import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC=""
ROOT = ""

# Update program name, list of input commands 
bmName = "clomp"
inputList = ["1 1 2 3 1 1 1", "1 1 2 3 2 2 1", "1 1 2 4 1 2 1", "1 1 2 3 2 1 2", "1 1 4 3 1 1 1", "1 1 5 3 4 4 4", "1 1 3 2 3 2 2", "1 1 3 3 3 3 3", "1 1 5 5 1 1 1", "1 1 4 4 2 2 2"]

# Set to 1 if program has input .txt files
input_txt = 0

# Update the paths according to your environment
OPT= ROOT + "/llvm-2.9-build/bin/opt"  
LLVMLINK= ROOT + "/llvm-2.9-build/bin/llvm-link" 
LLVMPASS_FOLDER= ROOT + "/llvm-2.9-build/lib/" 
LLI= ROOT + "/llvm-2.9-build/bin/lli"
PYTHON="python"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
