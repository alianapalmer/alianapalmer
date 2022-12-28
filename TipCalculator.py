# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)
#This program gets the subtotal and tip percentage from a user and calculates the tip amount and total.

#get subtotal and tip percentage from user.
subTotal=float(input("Enter the subtotal: $"))
tipPercent=float(input("Enter the tip percentage: "))

#caalculate tip as dollar amount.
tipAmount= subTotal*(tipPercent/100)

#add subtotal and tip amount to get total
total= subTotal+tipAmount

#output results
print('''Subtotal: ${0:,.2f}
Tip: ${1:,.2f}
Total: ${2:,.2f}'''.format(subTotal,tipAmount,total))