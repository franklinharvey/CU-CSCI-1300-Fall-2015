#Author: Franklin Harvey
#Folds to cm
#CSCI 1300
#Assignment 2
#Problem 2
#TA: Amber
paper_thickness = 1.0/200
folds_input = input("How many folds?")
i = 0
#new_paper_thickness = 0
while i < folds_input :
	paper_thickness *= 2
	i += 1
print ("The thickness of the paper after " + str(folds_input) + " folds is " + str(paper_thickness) + " cm. ")