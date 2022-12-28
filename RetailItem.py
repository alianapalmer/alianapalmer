# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

#RetailItem clas definition
class RetailItem:

    #constructor for inital values of Pets class passed through parameters
    def __init__(self,it = "N/A", iq = 0, ip = 0.0):
        self.__itemType = it
        self.__itemQuantity = int(iq)
        self.__itemPrice = float(ip)

    #formatted string method for neat presentation of data
    def __str__(self):
        formatString = '{itemtype:<15}{itemquantity:<15}${itemprice:<6.2f}'
        return formatString.format(itemtype = self.__itemType, itemquantity = self.__itemQuantity, itemprice = float(self.__itemPrice))


#main function
def main():

    #Properties of first item are gotten from the user and applied to the corresponding object
    name1 = input("Name of item 1: ").title()
    quant1 = input("Quantity of item 1: ")
    price1 = input("Price of item 1: ")

    item1 = RetailItem(name1,quant1,price1)

    print()

    #Properties of second item are gotten from the user and applied to the corresponding object
    name2 = input("Name of item 2: ").title()
    quant2 = input("Quantity of item 2: ")
    price2 = input("Price of item 2: ")

    item2 = RetailItem(name2, quant2, price2)

    #print statements to format items into a table in the console
    print("\nHere is a summary of what you added: ")
    formatString = '{itemtype:<15}{itemquantity:<15}{itemprice:<6}'
    print(formatString.format(itemtype = "Item", itemquantity = "Quantity", itemprice = "Price"))
    print("-"*40)
    print(item1)
    print(item2)

#main function call
main()