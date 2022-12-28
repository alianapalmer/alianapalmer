# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

#calculates the perimeter of a triangle if inputs are valid

#gets edge lengths from user
edge1 = float(input("Enter length of edge 1: "))
edge2 = float(input("Enter length of edge 2: "))
edge3 = float(input("Enter length of edge 3: "))

#checks if user values are valid
if((edge1+edge2)>edge3 and (edge2+edge3)>edge1 and (edge1+edge3)>edge2):
    #calculates and prints the perimeter
    sum=edge1+edge2+edge3
    print("The perimeter is {:.1f}.".format(sum))
else:
    #if the inputs are invalid this is returned
    print("Perimeter cannot be calculated: the input is invalid.")
