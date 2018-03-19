import sys, os


with open("instCountResult.txt", 'r') as rf:
	lines = rf.readlines()
	for line in lines:
		if ":" not in line:
			continue
		with open("fi_breakdown.txt", 'a') as wf:
			index = line.split(": ")[0]
			count = line.split(": ")[1].replace("\n", "")
			wf.write("-- FI Index: " + index + ", : , : , : , Total FI: " + count + "\n")
