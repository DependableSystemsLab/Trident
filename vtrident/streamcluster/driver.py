import sys, os

####################
bmName = "streamcluster"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["5 15 64 320 320 100 none output.txt 1", "10 15 32 640 640 60 none output.txt 1", "5 25 64 160 160 120 none output.txt 1", "15 25 256 220 220 100 none output.txt 1", "5 35 32 200 200 200 none output.txt 1", "4 6 64 260 260 50 none output.txt 1", "15 19 128 512 512 500 none output.txt 1", "10 90 16 320 320 100 none output.txt 1", "9 25 128 256 256 100 none output.txt 1", "5 15 8 1024 1024 16 none output.txt 1"]
####################


inC = 0
os.system("rm results -rf")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mkdir results")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1


