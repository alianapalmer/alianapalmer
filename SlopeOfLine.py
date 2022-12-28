# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 
#This program gets 2 sets of x,y coordinates from the user and calculates the slope of the line that connects them.

#gets the coordinates from the user
x1,y1=float(input('Enter first x-coordinate: ')),float(input('Enter first y-coordinate: '))
x2,y2=float(input('Enter second x-coordinate: ')),float(input('Enter second y-coordinate: '))

#calculates the slope
slope= (y2-y1)/(x2-x1)

#prints out the points and the final calculation
print('The slope of the line that connects two points (',x1,',',y1,') and (',x2,',',y2,') is: {:.5f}.'.format(slope),sep='')
