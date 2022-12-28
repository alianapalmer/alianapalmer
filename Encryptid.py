# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 

def main():

    #opening and reading input file
    fileIn = input("Please enter desired input filename: ")
    fileOut = input("Please enter desired output filename: ")
    in1 = open(fileIn,'r')
    inputFile = in1.read()
    in1.close()

    # calling conversion function and storing in variable
    outputFile = encryptText(inputFile)

    # writing converted text to output file
    out1 = open(fileOut,'w')
    out1.write(outputFile)
    out1.close()

#function to encrypt text
def encryptText(fIn):

    #dictionary containing encryption code
    encryptCode = {'A': ')', 'a': '0', 'B': '(', 'b': '9', 'C': '*', 'c': '8',
                    'D': '&', 'd': '7', 'E': '^', 'e': '6', 'F': '%', 'f': '5',
                    'G': '$', 'g': '4', 'H': '#', 'h': '3', 'I': '@', 'i': '2',
                    'J': '!', 'j': '1', 'K': 'Z', 'k': 'z', 'L': 'Y', 'l': 'y',
                    'M': 'X', 'm': 'x', 'N': 'W', 'n': 'w', 'O': 'V', 'o': 'v',
                    'P': 'U', 'p': 'u', 'Q': 'T', 'q': 't', 'R': 'S', 'r': 's',
                    'S': 'R', 's': 'r', 'T': 'Q', 't': 'q', 'U': 'P', 'u': 'p',
                    'V': 'O', 'v': 'o', 'W': 'N', 'w': 'n', 'X': 'M', 'x': 'm',
                    'Y': 'L', 'y': 'l', 'Z': 'K', 'z': 'k', '!': 'J', '1': 'j',
                    '@': 'I', '2': 'i', '#': 'H', '3': 'h', '$': 'G', '4': 'g',
                    '%': 'F', '5': 'f', '^': 'E', '6': 'e', '&': 'D', '7': 'd',
                    '*': 'C', '8': 'c', '(': 'B', '9': 'b', ')': 'A', '0': 'a',
                    ':': ',', ',': ':', '?': '.', '.': '?', '<': '>', '>': '<',
                    "'": '"', '"': "'", '+': '-', '-': '+', '=': ';', ';': '=',
                    '{': '[', '[': '{', '}': ']', ']': '}', ' ': ' ', '\n': '\n'}

    result = ""

    #iterate over the string and change each character according to the dictionary
    for char in fIn:
        a = encryptCode[char]
        result += a

    return result

#main function call
main()
