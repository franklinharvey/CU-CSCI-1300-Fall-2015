"""
Franklin Harvey
CSCI 1300
Project 1
TA = Amber
"""

#For Random Generation
import random
#For Saving date to txt file
import datetime
now = datetime.datetime.now()
#Startingscore
newScore = 0
#Game conditional
game = True

#function to add points
def addPoints(postDefRand, guess, inNum, newScore):
	if postDefRand == guess:
		newScore = newScore + inNum * inNum
		print name + " got it! Your score is " + str(newScore) + "!"
		return newScore
	else:
		print "Good try, " + name
		newScore -= 1
		return newScore

#function to create random number
def randomInt(inNum):
	randomNum = random.randint(1,inNum)
	return randomNum

#function to end game
def quitGame():
	play = raw_input("Keep Playing? You Must enter 'No' to quit.")
	if play == "No":
		game = False
	elif play != "No":
		game = True
	return game

#function to tell player what happened and to add points
def getNumbers(guess, postDefRand, newScore, inNum):
	print (name + " guessed " +str(guess)+ " and the computer generated " +str(postDefRand))
	newScore = addPoints(postDefRand, guess, inNum, newScore)
	return newScore

#function to play bonus round
def bonus(newScore):
	print("Bonus Round!")
	while newScore > 100:
		bonusRand = random.randint(1,2)
		bonusGuess = raw_input("What is you guess for the bonus round? Its either 1 or 2 ")
		print "The computer generated " + str(bonusRand)
		if int(bonusGuess) == bonusRand:
			newScore = abs(newScore) * 2
		elif newScore > 10000:
			break
		else:
			newScore -= newScore/2
		print newScore
	print "Bonus Round Over"
	return newScore

#function to see recent high score
def getHighScore ():
	fileHandle = open ( 'highscores.txt',"r" )
	preHighScore = fileHandle.readlines()
	fileHandle.close()
	return preHighScore[-1]

#function to save high score
def saveHighScore (newScore):
	with open("highscores.txt", "a") as f:
		f.write("\n" +  str(newScore) + " by " + name + " on " + str(now.strftime("%Y-%m-%d %H:%M")))

#explain game, get name, and tell what recent high score was
print "You get points for guessing numbers correctly, out of a randomly generated number."
print "You can choose how many numbers you will be choosing out of."
print "For example, guessing out of 10 or 1000 or even 9,999."
print "However, the wider range of numbers, the more points you get!"
name = raw_input("What is your name? ")
print name + " the most recent highscore on this computer was " + str(getHighScore())

#game loop
while game == True:
	inNum = input("Out of how many numbers would you like to guess? ")
	guess = input("What is " + name + "'s guess? ")

	postDefRand = randomInt(inNum)
		
	newScore = getNumbers(guess, postDefRand, newScore, inNum)
	print newScore

	game = quitGame()

	if 100 < newScore <= 10000:
		newScore = bonus(newScore)
	elif newScore > 10000:
		print name + " Wins!"
		game = False

#ending game, saving score
saveHighScore(newScore)
print "Thanks for playing" + name + "! Your final score was " +str(newScore)
