#Franklin Harvey
#Assignment 3
#Problem 1
#TA: Amber
fullName = raw_input("What is your name in the format Last, First Middle? ")
comma = fullName.find(",")
lastName = fullName[0:comma]
#print lastName
print fullName [comma + 2:len(fullName)] +  " " + lastName