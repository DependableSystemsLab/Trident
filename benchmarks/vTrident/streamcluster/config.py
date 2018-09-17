import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC=""
ROOT = ""

# Update program name, list of input commands 
bmName = "streamcluster"
inputList = ["5 15 64 320 320 100 none output.txt 1", "10 15 32 640 640 60 none output.txt 1", "5 25 64 160 160 120 none output.txt 1", "15 25 256 220 220 100 none output.txt 1", "5 35 32 200 200 200 none output.txt 1", "4 6 64 260 260 50 none output.txt 1", "15 19 128 512 512 500 none output.txt 1", "10 90 16 320 320 100 none output.txt 1", "9 25 128 256 256 100 none output.txt 1", "5 15 8 1024 1024 16 none output.txt 1"]

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
