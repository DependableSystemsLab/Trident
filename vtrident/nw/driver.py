import sys, os

####################
bmName = "needle"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["2048 10 1", "2014 20 1", "200 200 1", "512 256 1", "768 768 1", "400 400 1", "512 1024 1", "1300 1300 1", "120 120 1", "2000 2000 1"]
####################


inC = 0
os.system("rm results -rf")
os.system("mkdir results")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1


