#Franklin Harvey
#Assignment 3
#Problem 3
#TA: Amber

pointDif = raw_input("Enter the point difference:")
timeRemaining = raw_input("Enter the time remaining in seconds:")
ballStatus = raw_input("Does the leading team have the ball (y) or (n):")

pointDif = int(pointDif) - 3
if ballStatus == "y":
	pointDif = pointDif + .5
elif ballStatus == "n":
	pointDif = pointDif - .5
pointDif *= pointDif

#print pointDif

if pointDif > int(timeRemaining):
	print "Lead is safe."
else:
	print "Lead is not safe."