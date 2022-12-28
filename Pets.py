# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

#Pets class definition
class Pets:

    #constructor for inital values of Pets class
    def __init__(self):
        self.__petName = "N/A"
        self.__petAnimal = "N/A"
        self.__petAge = 0

    #mutator method for pet name
    def setPetName(self,name):
        self.__petName = name

    #mutator method for pet animal
    def setPetAnimal(self,anim):
        self.__petAnimal = anim

    #mutator method for pet age
    def setPetAge(self,age):
        self.__petAge = age

    #accessor method for pet name
    def getPetName(self):
        return self.__petName

    #accessor method for pet animal
    def getPetAnimal(self):
        return self.__petAnimal

    #accessor method for pet age
    def getPetAge(self):
        return self.__petAge


#main function
def main():

    #pet object created with default values
    pet1 = Pets()

    #print statments outputting the current values of the object
    print("A pet object has been created. Here is the initial information about the pet:")
    print("Name of Pet:",pet1.getPetName())
    print("Type of pet:",pet1.getPetAnimal())
    print("Age of pet:",pet1.getPetAge())
    print("Let's update the information for a pet!")

    #gets values to put into the pets object from the  user
    tName = input("Enter the pet's name: ")
    tType = input("Enter the type of animal: ")
    tAge = int(input("Enter the pet's age: "))

    #assigns user values to object
    pet1.setPetName(tName)
    pet1.setPetAnimal(tType)
    pet1.setPetAge(tAge)

    #print statements output updated object values
    print("Here is the updated information about the pet:")
    print("Name of Pet:", pet1.getPetName())
    print("Type of pet:", pet1.getPetAnimal())
    print("Age of pet:", pet1.getPetAge())

#main function call
main()