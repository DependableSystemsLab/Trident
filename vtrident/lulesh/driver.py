import sys, os

####################
bmName = "lulesh"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["-s 4 -p", "-s 1 -p", "-s 2 -p", "-s 3 -p", "-s 5 -p", "-s 7 -p", "-s 6 -p", "-s 8 -p", "-s 9 -p", "-s 10 -p"]
####################


inC = 0
os.system("rm results -rf")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mkdir results")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1


