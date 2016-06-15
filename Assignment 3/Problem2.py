#Franklin Harvey
#Assignment 3
#Problem 2
#TA: Amber
while 1==1:
	answer = raw_input("Do you want to play a game? (y) or (n)")
	
	if answer == "y":
		
		noun1 = raw_input("Enter a noun:")
		adjective1 = raw_input("Enter an adjective:")
		noun2 = raw_input("Enter another noun:")
		adjective2 = raw_input("Enter another adjective:")
		
		print "It was the " + adjective1 + " of " + noun1 + ", it was the " + adjective2 + " of " + noun2
		
		answer2 = raw_input("Do you want to play again? (y) or (n)")
		
		if answer2 == "n":
			print "Goodbye"
			break
	
	elif answer == "n":
		print "Goodbye"
		break
	
	else:
		continue