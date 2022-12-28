# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 
#This program gets the side length of a hexagon from the user and calculates the area of the hexagon.
import math

#get side length from user
sideLength=float(input("Enter length of one side: "))

#calculate the area from the side
hexArea= ((3*(math.sqrt(3)))/2)*math.pow(sideLength,2)

#output the side length and resulting area
print("The area of a hexagon with side a length of:",sideLength,'is {:.3f}.'.format(hexArea))
