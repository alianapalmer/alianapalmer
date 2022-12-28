# Driver: Elijah Shuman (U75798573)
# Navigator: Aliana Palmer (U69705951)

#Calculates wind chill from ambient temp and wind speed

#get temperature from user
temp= float(input("Enter the temperature in Fahrenheit: "))

#checks if user values are in correct range
while(temp<-58 or temp>41):
    #if user values are invalid, prompts user to re-enter them
    print("Temperature must be between -58F and 41F")
    temp = float(input("Please re-enter the temperature in Fahrenheit: "))

#gets wind speed from user
wspeed= float(input("Enter the wind speed in MPH: "))

#checks if user values are in correct range
while(wspeed<2):
    # if user values are invalid, prompts user to re-enter them
    print("Speed must be greater than or equal to 2")
    wspeed= float(input("Please re-enter the wind speed in MPH: "))

#calculate wind chill
windChill= 35.74 + (0.6215*temp) - (35.75*(wspeed**0.16)) + 0.4275*temp*(wspeed**0.16)

#print results
print('The wind chill index is {:.3f}'.format(windChill))