# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 

#Calculates the angle of an incline a cart is being pushed up
import math

#acceleration due to gravity
G = 9.8

#get values for mass and force from user
mass = float(input("Enter the mass of the cart (in kg): "))
force = float(input("Enter the force to push the cart (in N): "))

#calculate angle
angle = math.degrees(math.asin(force/(mass*G)))

#print results
print("The angle of the ramp is {:.1f} degrees.".format(angle))
