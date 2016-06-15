#Author: Franklin Harvey
#Converts seconds to hours minutes and seconds
#CSCI 1300
#Assignment 2
#Problem 1
#TA: Amber
s = int(input("Give me a number of seconds in a day i.e. less than 86400 "))
h = int((s / 3600)) #Converts seconds to hours
m = int((s % 3600) / 60) #Calculates the remainder of the minutes 
s = int(s % 60) # Calculates the remainder of seconds
print ("The time is " + str(h) + " hours " + str(m) + " minutes " + str(s) + " seconds ")