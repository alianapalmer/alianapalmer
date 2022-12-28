# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)
import math

daysWeek = ("Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday")
sales=[]
n=0
while n< len(daysWeek):

    print("Enter the sales for ", daysWeek[n], ": ", sep = '',end='')
    tempInput = float(input())
    while tempInput <0:
        print("Input was Invalid. Re-Enter the sales for ", daysWeek[n], ": ", sep = '',end='')
        tempInput=float(input())
    sales.append(tempInput)
    n+=1

#print(sales)
print("The total sales is: {:,.2f}".format(sum(sales)))
print("The min sales amount was: {:,.2f}".format(min(sales)))
print("The max sales amount was: {:,.2f}".format(max(sales)))

