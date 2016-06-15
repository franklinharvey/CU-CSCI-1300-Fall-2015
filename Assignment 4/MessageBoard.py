#Franklin Harvey
#Assignment 4
#TA = Amber

#Defining Variables
choice = 0
mbList = []

#Main Menu
while choice != 4:
	print "1. Add an item."
	print "2. Find an item."
	print "3. Print the message board."
	print "4. Quit."

	#Asking User For Menu Option
	choice = input("Enter your selection:")

	#Adding items to board
	if choice == 1:
		addTypeCode = raw_input("Enter the item type-b,m,d,t,c:")
		itemCost = input("Enter the item cost:")
	
	#Defining types to user input
		if addTypeCode == "b":
			addType = "bike"
		elif addTypeCode == "m":
			addType = "microwave"
		elif addTypeCode == "d":
			addType = "dresser"
		elif addTypeCode == "t":
			addType = "truck"
		elif addTypeCode == "c":
			addType = "chicken"

	#Appending users choice to mbList
		if itemCost >= 0:
			mbList.append([addType, itemCost])

	#Finding type from user input, and setting user's buying price
	if choice == 2:
		findTypeCode = raw_input("Enter the item type-b,m,d,t,c:")
		findCost = int(input("Enter the maximum item cost:"))
		if findTypeCode == "b":
			findType = "bike"
		elif findTypeCode == "m":
			findType = "microwave"
		elif findTypeCode == "d":
			findType = "dresser"
		elif findTypeCode == "t":
			findType = "truck"
		elif findTypeCode == "c":
			findType = "chicken"

		#Iterating through list, checking matching types
		for i in range(len(mbList)):
			itemType = mbList[i][0]
			itemFound = False
			if findType == itemType:
				buyCost = int(mbList[i][1])
				#comparing asking price with buying price
				if (findCost >= buyCost):
					itemFound =  True
					print ("Sold " + str(itemType) + " for " + str(buyCost))
					del(mbList[i])
				if(itemFound):
					break

		

	#Print the List
	if choice ==3:
		for i in mbList:
			print str(i[0]) +  " :  " + str(i[1])

#Variables:
#choice is users main menu choice
#mbList is the list that users can add to and buy from.
	#It is comprised of lists within its main list
#addTypeCode is the users single-letter input deciding what kind of item to add to mbList
#itemCost is the users asking price for the item they would like to sell
#addType is what is stored in mbList and is the full word of the single-letter choice, i.e 'b' becomes 'bike'
#findTypeCode is the single-letter code for the type of item a user is looking for in the existing mbList
#findCost is the user's maximum price to be spending on the item
#findType is similar to addType, and is checked against against existing mbList entries
#itemType is used to compare the currently itterating mbList entry to the user's find-query
#itemFound is a bool used to break the for loop when an item is found
	#Used to stop the system from selling multiple items of the same type
#buyCost is a variable used to check the price of the currently itterating mbList entry
