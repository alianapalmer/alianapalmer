# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

def main():

    #opening and reading input file
    fileIn = input("Please enter desired input filename: ")
    fileOut = input("Please enter desired output filename: ")
    in1 = open(fileIn,'r')
    inputFile = in1.read()
    in1.close()

    #calling conversion function and storing in variable
    outputFile = pigLatinConvert(inputFile)

    #writing converted text to output file
    out1 = open(fileOut,'w')
    out1.write(outputFile)
    out1.close()

def pigLatinConvert(fIn):

    #split string into a list
    wordList = fIn.split()
    result = ""

    #iterate over the list and modify each word
    for word in wordList:
        a = word[0]
        c = word+"e"
        b = c[1:-1]
        result += b + a + "ay "
    return result

#main function call
main()
