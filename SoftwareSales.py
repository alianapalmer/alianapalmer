# Driver: Elijah Shuman 
# Navigator: Aliana Palmer 

#calculates and applies discount based on quantity purchased

#price constant
PRICE= 99.00

#get number of packages purshased from user
quantity = int(input("Enter the number of packages purchased: "))

#if statements check how many packages there are and applies the correct discounts
if(quantity<10):
    discount = 0
    discPercent= 0
elif(quantity>=10 and quantity<20):
    discPercent = 0.1
    discount = PRICE*quantity*discPercent
elif(quantity>=20 and quantity<50):
    discPercent = 0.2
    discount = PRICE * quantity * discPercent
elif(quantity>=50 and quantity<100):
    discPercent = 0.3
    discount = PRICE*quantity*discPercent
elif(quantity>=100):
    discPercent = 0.4
    discount = PRICE * quantity * discPercent

#prints out resulting discount and total cost
print("Discount amount @{:.0%} {:.2f}".format(discPercent,discount))
print("Total amount: ${:.2f}".format((quantity*PRICE) - discount))
