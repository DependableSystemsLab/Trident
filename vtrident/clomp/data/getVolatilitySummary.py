import sys, os

##########################
#sys.argv[1]
##########################
minFileNo = 0
maxFileNo = 9
minFiTimes = 10


sdcIndexDic = {}
dynPortionDic = {}
totalFiTimesDic = {}

for x in range(minFileNo, maxFileNo+1):
	with open ("input_" + `x` + "-fi.txt", 'r') as rf:
		totalFiTimes = 0
		localDynPortionDic = {}

		lines = rf.readlines()
		for line in lines:
			if "FI: " in line:
				fiTimes = int(line.split("FI: ")[1].replace("\n", ""))
				totalFiTimes += fiTimes
				if fiTimes > minFiTimes:
					# Get index
					if "," in line:
						fiIndex = int( line.split(",")[0].replace("-- FI Index: ", "") )
						if x not in sdcIndexDic:
							sdcIndexDic[x] = {};
						if fiIndex not in sdcIndexDic[x]:
							sdcIndexDic[x][fiIndex] = {}

						localDynPortionDic[fiIndex] = fiTimes

						# Get SDC prob.
						sdcProb = float( line.split(",")[1].replace(" SDC: ", "") )
						sdcIndexDic[x][fiIndex] = sdcProb

		if x not in totalFiTimesDic:
			totalFiTimesDic[x] = totalFiTimes
		if x not in dynPortionDic:
			dynPortionDic[x] = localDynPortionDic

#print sdcIndexDic
for x in range(minFileNo, maxFileNo+1):
	for y in range(x+1, maxFileNo+1):
		print ""
		print "INPUT:" + `x` + "," + `y`
		dynPortion1 = 0
		dynPortion5 = 0
		dynPortion10 = 0
		dynPortion15 = 0
		dynPortion20 = 0
		statPortion1 = 0
		statPortion5 = 0
		statPortion10 = 0
		statPortion15 = 0
		statPortion20 = 0
		avgStatic = 0
		for fiIndex in sdcIndexDic[x]:
			if fiIndex in sdcIndexDic[y]:
				avgStatic += 1
				sdcX = sdcIndexDic[x][fiIndex]
				sdcY = sdcIndexDic[y][fiIndex]
				diffSdc = abs(sdcX - sdcY)
				dynPortionX = dynPortionDic[x][fiIndex] / float(totalFiTimesDic[x])
				dynPortionY = dynPortionDic[y][fiIndex] / float(totalFiTimesDic[y])
				avgDynPortion = float(dynPortionX + dynPortionY) / 2
				
				#print `fiIndex` + " " +`sdcX` + " " + `sdcY` + " " + `abs(sdcX-sdcY)` + " " + `float(dynPortionDic[x][fiIndex])/totalFiTimesDic[x]` + " " + `float(dynPortionDic[y][fiIndex])/totalFiTimesDic[y]`
				
				# Look at cutoff of 5% and 10% etc
				if diffSdc > 0.01:
					statPortion1 += 1
					dynPortion1 += avgDynPortion		

				if diffSdc > 0.05:
					statPortion5 += 1
					dynPortion5 += avgDynPortion		

				if diffSdc > 0.1:
					statPortion10 += 1
					dynPortion10 += avgDynPortion		

				if diffSdc > 0.15:
					statPortion15 += 1
					dynPortion15 += avgDynPortion		

				if diffSdc > 0.2:
					statPortion20 += 1
					dynPortion20 += avgDynPortion		

		if avgStatic == 0:
			print "0.01 " + `0` + " " + `dynPortion1`
			print "0.05 " + `0` + " " + `dynPortion5`
			print "0.10 " + `0` + " " + `dynPortion10`
			print "0.15 " + `0` + " " + `dynPortion15`
			print "0.20 " + `0` + " " + `dynPortion20`
		else:
			print "0.01 " + `statPortion1 / float(avgStatic)` + " " + `dynPortion1`
			print "0.05 " + `statPortion5 / float(avgStatic)` + " " + `dynPortion5`
			print "0.10 " + `statPortion10 / float(avgStatic)` + " " + `dynPortion10`
			print "0.15 " + `statPortion15 / float(avgStatic)` + " " + `dynPortion15`
			print "0.20 " + `statPortion20 / float(avgStatic)` + " " + `dynPortion20`





