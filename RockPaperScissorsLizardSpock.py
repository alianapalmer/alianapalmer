# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 

#This program lets  a user play Rock, Paper, Scissors, Lizard, Spock against the computer
import random

#tuple that stores the options that ca be picked
options = ('Rock','Paper','Scissors','Lizard','Spock')

#variables used in game
gamesPlayed = 0
compWins = 0
userWins = 0
tieGames = 0
userChoice = ''
compChoice = ''
playAgain = ''

#game loop
while True:
    print("Let's play Rock, Paper, Scissors, Lizard, Spock!")

    #get choice from user
    userChoice = input('Enter your choice: ')
    userChoice = userChoice.title()

    #check if user choice is valid
    while userChoice not in options:
        userChoice = input('That\'s invalid. Please enter Rock, Paper, Scissors, Lizard, or Spock: ')
        userChoice = userChoice.title()

    #computer makes choice
    compChoice = options[random.randint(0,4)]

    print("Computer chose", compChoice)


    if userChoice == compChoice: #tie game
        print("Tie game!")
        tieGames += 1
    elif (userChoice == options[0]): #user picks rock and compares to comp choices
        if compChoice == options[3]:
            print("Rock crushes Lizard! You win!")
            userWins +=1
        elif compChoice == options[1]:
            print("Paper covers Rock! You lose!")
            compWins +=1
        elif compChoice == options[4]:
            print("Spock vaporizes Rock! You lose!")
            compWins +=1
        elif compChoice == options[2]:
            print("Rock crushes Scissors! You win!")
            userWins +=1
    elif userChoice == options[1]: #user picks paper and compares to comp choices
        if compChoice == options[2]:
            print("Scissors cuts Paper! You lose!")
            compWins +=1
        elif compChoice == options[0]:
            print("Paper covers Rock! You win!")
            userWins+=1
        elif compChoice == options[3]:
            print("Lizard eats Paper! You lose!")
            compWins+=1
        elif compChoice == options[4]:
            print("Paper disproves Spock! You win!")
            userWins +=1
    elif userChoice == options[2]: #user picks scissors and compares to comp choices
        if compChoice == options[1]:
            print("Scissors cuts Paper! You win!")
            userWins+=1
        elif compChoice == options[4]:
            print("Spock smashes Scissors! You lose!")
            compWins+=1
        elif compChoice == options[3]:
            print("Scissors decapitates Lizard! You win!")
            userWins+=1
        elif compChoice == options[0]:
            print("Rock crushes Scissors! You lose!")
            compWins+=1
    elif userChoice == options[3]: #user picks lizard and compares to comp choices
        if compChoice == options[0]:
            print("Rock crushes Lizard! You lose!")
            compWins += 1
        elif compChoice == options[4]:
            print("Lizard poisons Spock! You win!")
            userWins+=1
        elif compChoice == options[2]:
            print("Scissors decapitates Lizard! You lose!")
            compWins+=1
        elif compChoice == options[1]:
            print("Lizard eats Paper! You win!")
            userWins+=1
    elif userChoice == options[4]: #user picks spock and compares to comp choices
        if compChoice == options[3]:
            print("Lizard poisons Spock! You lose!")
            compWins+=1
        elif compChoice == options[2]:
            print("Spock smashes Scissors! You win!")
            userWins+=1
        elif compChoice == options[1]:
            print("Paper disproves Spock! You lose!")
            compWins+=1
        elif compChoice == options[0]:
            print("Spock vaporizes Rock! You win!")
            userWins+=1

    gamesPlayed+=1

    #ask user to play again
    playAgain = input("Play again? (yes/no): ")
    playAgain = playAgain.lower()

    #checks if user input is valid
    while playAgain != "yes" and playAgain != "no":
        playAgain = input("Invalid response. Play again? Enter yes or no only: ")

    if playAgain != "yes":
        break

#prints game results
print("Number of games played:",gamesPlayed)
print("Games you won:", userWins)
print("Games the computer won:", compWins)
print("Tie games:", tieGames)
print("Thanks For Playing!")
