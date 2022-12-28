# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

#This class defines the questions object and provides moutator and accessor methods for each of the objesct's variables
class Questions:

    #initialization method for object variables
    def __init__(self):
        self.__triviaQuestion = ""
        self.__ans1 = ""
        self.__ans2 = ""
        self.__ans3 = ""
        self.__ans4 = ""
        self.__correctAns = 1

    #the following 6 methods are mutators for changing object variables
    def setTriviaQuestion(self,tq):
        self.__triviaQuestion = tq

    def setAnswer1(self,ans):
        self.__ans1 = ans

    def setAnswer2(self,ans):
        self.__ans2 = ans

    def setAnswer3(self,ans):
        self.__ans3 = ans

    def setAnswer4(self,ans):
        self.__ans4 = ans

    def setCorrectAns(self,corAns):
        self.__correctAns = int(corAns)

    #the following 6 methods are accessors for viewing object variables
    def getTriviaQuestion(self):
        return self.__triviaQuestion

    def getAnswer1(self):
        return self.__ans1

    def getAnswer2(self):
        return self.__ans2

    def getAnswer3(self):
        return self.__ans3

    def getAnswer4(self):
        return self.__ans4

    def getCorrectAns(self):
        return self.__correctAns

    #string method for formatting trivia questions
    def __str__(self):
        return '''{} 
1. {} 
2. {} 
3. {} 
4. {} '''.format(self.__triviaQuestion,self.__ans1,self.__ans2,self.__ans3,self.__ans4)
