import sys, os

##########################
fiDataFolder = sys.argv[1]
predDataFolder = sys.argv[2]
##########################
minFileNo = 0
maxFileNo = 9
minFiTimes = 10

sdcIndexDic = {}
dynPortionDic = {}
totalFiTimesDic = {}
predSdcDic = {}


for y in range(minFileNo, maxFileNo+1):
	with open(predDataFolder + "/prediction.results-" + `y`, 'r') as pf:
		lines = pf.readlines()
		for line in lines:
			if "" == line or "FI" not in line:
				continue

			instIndex = int( line.split(": ")[1].replace(", SDC", "") )
			if y not in predSdcDic:
				predSdcDic[y] = {}
			predSdcDic[y][instIndex] = float(line.split(": ")[2].replace(", Benign", ""))
				



for x in range(minFileNo, maxFileNo+1):
	with open (fiDataFolder + "/input_" + `x` + "-fi.txt", 'r') as rf:
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
							sdcIndexDic[x][fiIndex] = 0

						localDynPortionDic[fiIndex] = fiTimes

						# Get SDC prob.
						sdcProb = float( line.split(",")[1].replace(" SDC: ", "") )
						sdcIndexDic[x][fiIndex] = sdcProb

		if x not in totalFiTimesDic:
			totalFiTimesDic[x] = totalFiTimes
		if x not in dynPortionDic:
			dynPortionDic[x] = localDynPortionDic

#print sdcIndexDic
total1 = 0
total5 = 0
total10 = 0
total15 = 0
total20 = 0
recall1 = 0
recall5 = 0
recall10 = 0
recall15 = 0
recall20 = 0
totalp1 = 0
prec1 = 0
totalp5 = 0
prec5 = 0
totalp10 = 0
prec10 = 0
totalp15 = 0
prec15 = 0
totalp20 = 0
prec20 = 0
acy = 0
totalAcy = 0
totalPortion = 0
acyPortion = 0

for x in range(minFileNo, maxFileNo+1):
	for y in range(x+1, maxFileNo+1):
		#print ""
		#print "INPUT:" + `x` + "," + `y`
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
		if x not in sdcIndexDic or y not in sdcIndexDic:
			continue
		for fiIndex in sdcIndexDic[x]:
			if fiIndex in sdcIndexDic[y]:
				avgStatic += 1
				sdcX = sdcIndexDic[x][fiIndex] # Read FI SDC
				sdcY = sdcIndexDic[y][fiIndex]
				diffSdc = abs(sdcX - sdcY)
				dynPortionX = dynPortionDic[x][fiIndex] / float(totalFiTimesDic[x])
				dynPortionY = dynPortionDic[y][fiIndex] / float(totalFiTimesDic[y])
				avgDynPortion = float(dynPortionX + dynPortionY) / 2
				
				#print `fiIndex` + " " +`sdcX` + " " + `sdcY` + " " + `abs(sdcX-sdcY)` + " " + `float(dynPortionDic[x][fiIndex])/totalFiTimesDic[x]` + " " + `float(dynPortionDic[y][fiIndex])/totalFiTimesDic[y]`

				################################
				# Calculate recall
				if x in predSdcDic and y in predSdcDic:
					if fiIndex in predSdcDic[x] and fiIndex in predSdcDic[y]:
						pSdcX = predSdcDic[x][fiIndex]
						pSdcY = predSdcDic[y][fiIndex]
						pDiffSdc = abs(pSdcX - pSdcY)

						########################################
						totalPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
						totalAcy += 1

#						if diffSdc < 0.01 and pDiffSdc < 0.01:
#							acy += 1
#							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
#						if diffSdc > 0.01 and diffSdc < 0.05 and pDiffSdc > 0.01 and diffSdc < 0.05:
#							acy += 1
#							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
#						if diffSdc > 0.05 and diffSdc < 0.1 and pDiffSdc > 0.05 and diffSdc < 0.1:
#							acy += 5
#							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
#						if diffSdc > 0.1 and diffSdc < 0.15 and pDiffSdc > 0.1 and diffSdc < 0.15:
#							acy += 1
#							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
#						if diffSdc > 0.15 and diffSdc < 0.2 and pDiffSdc > 0.15 and diffSdc < 0.2:
#							acy += 1
#							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
#						if diffSdc > 0.2 and pDiffSdc > 0.2:
#							acy += 1
#							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]

						if diffSdc < 0.1 and pDiffSdc < 0.1:
							acy += 1
							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
						if diffSdc > 0.1 and diffSdc < 0.2 and pDiffSdc > 0.1 and diffSdc < 0.2:
							acy += 1
							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
						if diffSdc > 0.2 and pDiffSdc > 0.2:
							acy += 1
							acyPortion += dynPortionDic[x][fiIndex] + dynPortionDic[y][fiIndex]
						########################################


						
						if diffSdc < 0.01:
							total1 += 1
							if pDiffSdc < 0.01:
								recall1 += 1
								#print `diffSdc` + " " + `pDiffSdc`
						if diffSdc < 0.05:
							total5 += 1
							if pDiffSdc < 0.05:
								recall5 += 1

						if diffSdc < 0.1:
							total10 += 1
							if pDiffSdc < 0.1:
								recall10 += 1

						if diffSdc < 0.15:
							total15 += 1
							if pDiffSdc < 0.15:
								recall15 += 1

						if diffSdc < 0.2:
							total20 += 1
							if pDiffSdc < 0.2:
								recall20 += 1

						#Calculate precision
						if pDiffSdc < 0.01:
							totalp1 += 1
							if diffSdc < 0.01:
								prec1 += 1

						if pDiffSdc < 0.05:
							totalp5 += 1
							if diffSdc < 0.05:
								prec5 += 1
				
						if pDiffSdc < 0.1:
							totalp10 += 1
							if diffSdc < 0.1:
								prec10 += 1

						if pDiffSdc < 0.15:
							totalp15 += 1
							if diffSdc < 0.15:
								prec15 += 1

						if pDiffSdc < 0.2:
							totalp20 += 1
							if diffSdc < 0.2:
								prec20 += 1
'''				# Look at cutoff of 5% and 10% etc
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
'''
#		print "0.01 " + `statPortion1 / float(avgStatic)` + " " + `dynPortion1`
#		print "0.05 " + `statPortion5 / float(avgStatic)` + " " + `dynPortion5`
#		print "0.10 " + `statPortion10 / float(avgStatic)` + " " + `dynPortion10`
#		print "0.15 " + `statPortion15 / float(avgStatic)` + " " + `dynPortion15`
#		print "0.20 " + `statPortion20 / float(avgStatic)` + " " + `dynPortion20`



##########################################################
'''
print "Recall: "
print " --- 1% cutoff: " + `recall1` + " in " + `total1`
print " --- 5% cutoff: " + `recall5` + " in " + `total5`
print " --- 10% cutoff: " + `recall10` + " in " + `total10`
print " --- 15% cutoff: " + `recall15` + " in " + `total15`
print " --- 20% cutoff: " + `recall20` + " in " + `total20`

print "Precision: "
print " --- 1% cuoff: " + `prec1` + " in " + `totalp1`
print " --- 5% cuoff: " + `prec5` + " in " + `totalp5`
print " --- 10% cuoff: " + `prec10` + " in " + `totalp10`
print " --- 15% cuoff: " + `prec15` + " in " + `totalp15`
print " --- 20% cuoff: " + `prec20` + " in " + `totalp20`
'''

print "Accuracy (Static): " + `acy` + " out of " + `totalAcy` + " -> " + `acy/float(totalAcy)`
print "Accuracy (Dynamic): " + `acyPortion` + " out of " + `totalPortion` + " -> " + `acyPortion/float(totalPortion)`
