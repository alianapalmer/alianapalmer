# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

import QuestionsClass

#This function uses the questions object to set up 10 trivia questions, store them in a list, and then return that list
def getTriviaQuestions():

    #initialization of list
    trivaList = []

    #creation of each of the question objects below and assignment of variables
    question1 = QuestionsClass.Questions()
    question1.setTriviaQuestion("How many days are in a lunar year?")
    question1.setAnswer1("354")
    question1.setAnswer2("365")
    question1.setAnswer3("243")
    question1.setAnswer4("379")
    question1.setCorrectAns(1)

    question2 = QuestionsClass.Questions()
    question2.setTriviaQuestion("What is the largest planet?")
    question2.setAnswer1("Mars")
    question2.setAnswer2("Jupiter")
    question2.setAnswer3("Earth")
    question2.setAnswer4("Pluto")
    question2.setCorrectAns(2)

    question3 = QuestionsClass.Questions()
    question3.setTriviaQuestion("What is the largest kind of whale?")
    question3.setAnswer1("Orca whale")
    question3.setAnswer2("Humpback whale")
    question3.setAnswer3("Beluga whale")
    question3.setAnswer4("Blue whale")
    question3.setCorrectAns(4)

    question4 = QuestionsClass.Questions()
    question4.setTriviaQuestion("Which dinosaur could fly?")
    question4.setAnswer1("Triceratops")
    question4.setAnswer2("Tyrannosaurus Rex")
    question4.setAnswer3("Pteranodon")
    question4.setAnswer4("Diplodocus")
    question4.setCorrectAns(3)

    question5 = QuestionsClass.Questions()
    question5.setTriviaQuestion("Which of these Winnie the Pooh characters is a donkey? ")
    question5.setAnswer1("Pooh")
    question5.setAnswer2("Eeyore")
    question5.setAnswer3("Piglet")
    question5.setAnswer4("Kanga")
    question5.setCorrectAns(2)

    question6 = QuestionsClass.Questions()
    question6.setTriviaQuestion("What is the hottest planet?")
    question6.setAnswer1("Mars")
    question6.setAnswer2("Pluto")
    question6.setAnswer3("Earth")
    question6.setAnswer4("Venus")
    question6.setCorrectAns(4)

    question7 = QuestionsClass.Questions()
    question7.setTriviaQuestion("Which dinosaur had the largest brain compared to body size?")
    question7.setAnswer1("Troodon")
    question7.setAnswer2("Stegosaurus")
    question7.setAnswer3("Ichthyosaurus")
    question7.setAnswer4("Gigantoraptor")
    question7.setCorrectAns(1)

    question8 = QuestionsClass.Questions()
    question8.setTriviaQuestion("What is the largest type of penguins?")
    question8.setAnswer1("Chinstrap penguins")
    question8.setAnswer2("Macaroni penguins")
    question8.setAnswer3("Emperor penguins")
    question8.setAnswer4("White-flippered penguins")
    question8.setCorrectAns(3)

    question9 = QuestionsClass.Questions()
    question9.setTriviaQuestion("Which children's story character is a monkey?")
    question9.setAnswer1("Winnie the Pooh")
    question9.setAnswer2("Curious George")
    question9.setAnswer3("Horton")
    question9.setAnswer4("Goofy")
    question9.setCorrectAns(2)

    question10 = QuestionsClass.Questions()
    question10.setTriviaQuestion("How long is a year on Mars?")
    question10.setAnswer1("550 Earth days")
    question10.setAnswer2("498 Earth days")
    question10.setAnswer3("126 Earth days")
    question10.setAnswer4("687 Earth days")
    question10.setCorrectAns(4)

    #append the trivia questions objects to the questions list
    trivaList.append(question1)
    trivaList.append(question2)
    trivaList.append(question3)
    trivaList.append(question4)
    trivaList.append(question5)
    trivaList.append(question6)
    trivaList.append(question7)
    trivaList.append(question8)
    trivaList.append(question9)
    trivaList.append(question10)

    return trivaList