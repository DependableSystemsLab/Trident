import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC=""
ROOT = ""

# Update program name, list of input commands 
bmName = "needle"
inputList = ["2048 10 1", "2014 20 1", "200 200 1", "512 256 1", "768 768 1", "400 400 1", "512 1024 1", "1300 1300 1", "120 120 1", "2000 2000 1"]

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
