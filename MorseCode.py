# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 

#This program takes a user input String and converts it to morse code

#This tuple stores the morse code for easy indexing
codeList = (" ","--..--",'.-.-.-','..--..','-----','.----','..---','...---','....-','.....','-....','--...','---..',
            '----.',".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.",
            "---", ".--.", "--.-", ".-.","...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..")
#gets the message string from the user
message = input("Enter the string to be converted to Morse code: ")

#converts all characters to same case
message = message.upper()

#compares each letter in the string to its morse code equivalent and outputs the correct character in morse code
for j in message:
    if j == " ":
        print(codeList[0], end='')
    elif j == ",":
        print(codeList[1], end='')
    elif j == ".":
        print(codeList[2], end='')
    elif j == "?":
        print(codeList[3], end='')
    elif j == "0":
        print(codeList[4], end='')
    elif j == "1":
        print(codeList[5], end='')
    elif j == "2":
        print(codeList[6], end='')
    elif j == "3":
        print(codeList[7], end='')
    elif j == "4":
        print(codeList[8], end='')
    elif j == "5":
        print(codeList[9], end='')
    elif j == "6":
        print(codeList[10], end='')
    elif j == "7":
        print(codeList[11], end='')
    elif j == "8":
        print(codeList[12], end='')
    elif j == "9":
        print(codeList[13], end='')
    elif j == "A":
        print(codeList[14], end='')
    elif j == "B":
        print(codeList[15], end='')
    elif j == "C":
        print(codeList[16], end='')
    elif j == "D":
        print(codeList[17], end='')
    elif j == "E":
        print(codeList[18], end='')
    elif j == "F":
        print(codeList[19], end='')
    elif j == "G":
        print(codeList[20], end='')
    elif j == "H":
        print(codeList[21], end='')
    elif j == "I":
        print(codeList[22], end='')
    elif j == "J":
        print(codeList[23], end='')
    elif j == "K":
        print(codeList[24], end='')
    elif j == "L":
        print(codeList[25], end='')
    elif j == "M":
        print(codeList[26], end='')
    elif j == "N":
        print(codeList[27], end='')
    elif j == "O":
        print(codeList[28], end='')
    elif j == "P":
        print(codeList[29], end='')
    elif j == "Q":
        print(codeList[30], end='')
    elif j == "R":
        print(codeList[31], end='')
    elif j == "S":
        print(codeList[32], end='')
    elif j == "T":
        print(codeList[33], end='')
    elif j == "U":
        print(codeList[34], end='')
    elif j == "V":
        print(codeList[35], end='')
    elif j == "W":
        print(codeList[36], end='')
    elif j == "X":
        print(codeList[37], end='')
    elif j == "Y":
        print(codeList[38], end='')
    elif j == "Z":
        print(codeList[39], end='')

