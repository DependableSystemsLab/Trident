import sys, os
from config import bmName,fiFilePrefix,irPath,inputList

minFileNo = 0
maxFileNo = len(inputList)

inC = 0

os.system("rm results -rf")
os.system("mkdir results")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1

# Store the variation results in results/prediction.results
SDC_list = []

# Populate the variation.results file showing the SDC range and input no. to use FI 
for y in range(minFileNo, maxFileNo+1):
	with open(os.getcwd() + "/results"+"/prediction.results-" + `y`, 'r') as pf:
		lines = pf.readlines()
		for line in lines:
			if "Aggregated SDC:" in line:
				SDC_list.append(float(line.replace("Aggregated SDC: ", "")))

max_sdc = max(SDC_list)*100
min_sdc = min(SDC_list)*100
range_sdc = max_sdc - min_sdc

median_index = int(math.ceil(float(maxFileNo)/2))
median_index =  SDC_list.index(sorted(SDC_list, key=float)[median_index])

with open(os.getcwd() + "/results" + "/variation.results", 'w') as pf:
	pf.write("Maximum SDC: " + format(max_sdc,'.2f') + " %\n")
	pf.write("Minimum SDC: " + format(min_sdc,'.2f') + " %\n")
	pf.write("SDC Range  : " + format(range_sdc, '.2f') + "%\n")
	pf.write("\nInput to be used for Fault injection: " + "input_" + `median_index` + "-fi.txt" +"\n")

with open(os.getcwd() + "/results" + "/variation.results", 'r') as pf:
    print pf.read()


