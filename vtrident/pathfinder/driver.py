import sys, os

####################
bmName = "pathfinder"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["432 52", "1000 10", "200 20", "100 100", "600 50", "150 150", "232 46", "65 321", "54 43", "139 94"]
####################


inC = 0
os.system("rm results -rf")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mkdir results")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1


