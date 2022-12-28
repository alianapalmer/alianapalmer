# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

import TriviaQuestions
import QuestionsClass

#main fucnction to play the trivia game
#function handles getting questions from other function, asking questions, and keeping score
def main():
    #assign list of trivia questions to variable
    questionslist = TriviaQuestions.getTriviaQuestions()

    #initialization of variables for keeping track of game elements
    num = 0
    player = 1
    playerChoice = 0
    player1Points = 0
    player2Points = 0

    #for loop to iterate over the questions list and call each object
    for question in questionslist:

        #determines which player's turn it is
        if (num%2) == 0:
            player = 1
            print("Question for player 1:")
        else:
            player = 2
            print("Question for player 2:")

        #print question for player and get their answer choice
        print(question)
        playerChoice = int(input("Enter your solution (a number between 1 and 4): "))

        #checks if the player's choice is correct and awards the correct amount of points
        if playerChoice == question.getCorrectAns():
            print("That is the correct answer!\n")
            if player == 1:
                player1Points += 1
            else:
                player2Points += 1
        else:
            print("That is incorrect! The correct answer is: {}\n".format(question.getCorrectAns()))
        num += 1

    #prints out results of points earned and who won the game
    print("Player 1 earned {} points".format(player1Points))
    print("Player 2 earned {} points".format(player2Points))
    if player1Points == player2Points:
        print("It's a tie!")
    elif player1Points > player2Points:
        print("Player 1 wins the game!")
    else:
        print("Player 2 wins the game!")


#main function call
main()