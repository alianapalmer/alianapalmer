# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 
#This program gets velocity and acceleration form the user and calculates the minimum runway length needed for takeoff.

#get v and a from user
v=float(input('Enter plane\'s velocity in m/s: '))
a=float(input("Enter the plane's acceleration in m/s**2: "))

#calculate runway length
runwayLength= (v**2)/(2*a)

#output the required runway length.
print("The minimum runway length required for the airplane is:",format(runwayLength,'.4f'),'meters.')
