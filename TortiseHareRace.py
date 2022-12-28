# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 

# A program that simulates a race between the tortoise and the hare
import random

#main function
def main():
    print("ON YOUR MARK... GET SET... \nGO!!!!!! \nAND THEY'RE OFF! \n")

    #position values
    harePos = 1
    tortoisePos = 1
    seconds = 0

    #main race loop
    while harePos < 50 and tortoisePos < 50:

        #updates the current positions of the contestants
        harePos = HareMove(harePos)
        tortoisePos = TortoiseMove(tortoisePos)

        #calls the race function
        Race(tortoisePos,harePos)


        seconds += 1

    #if statement to determine winner
    if tortoisePos >= harePos:
        print("Tortoise wins! Yay!")
    else:
        print("Hare wins! Yay!")

    print("Time of Race: {} seconds".format(seconds))

#Tortoise movement function
#accepts current position and updates it with new position then returns it
def TortoiseMove(T):
    #random int generator
    move = random.randint(1, 10)

    #movement of tortoise
    if move >= 1 and move <= 5:
        T += 3
    elif move >= 6 and move <= 7:
        T -= 5
    else:
        T += 1

    #ensures positions stay in bounds
    if T < 1:
        T = 1
    if T > 50:
        T = 50

    return T

#Hare movement function
#accepts current position and updates it with new position then returns it
def HareMove(H):
    #random int generator
    move = random.randint(1,10)

    # movement of Hare
    if move >= 1 and move <= 2:
        #nothing happens
        H += 0
    elif move >= 3 and move <= 4:
        H += 7
    elif move == 5:
        H -= 10
    elif move >= 6 and move <= 8:
        H += 1
    else:
        H -= 2

    # ensures positions stay in bounds
    if H < 1:
        H = 1
    if H > 50:
        H = 50

    return H

#Race restults function
#prints current race status
def Race(T,H):
    #for loop iterates across a range of 50 and places 'T' and 'H' in the correct positions along the track
    for c in range(1,51):
        if c == T and c == H:
            print("OW!")
        elif c == T:
            print("T",end='')
        elif c == H:
            print("H",end='')
        else:
            print(" ",end='')
    print()



# actual program call
main()
