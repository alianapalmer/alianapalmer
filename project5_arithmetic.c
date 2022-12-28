/* 	Name: project5_arithmetic.c
	Description: Calculate the result of an arithmetic operation (+, -, *) of two single digit
	postive integers
	Author: Aliana Palmer */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int num1, num2, result=0;
	int sign;
	
	printf("Enter input: ");
	 
	num1 = atoi(argv[1]);			// converts the string to an integer
	
	sign = argv[2][0];				// assigns sign to the sign character using a mutli dimensional array to access it
	
	num2 = atoi(argv[3]);			// converts the string to an integer	
	
	if ((sign != '+' && sign != '-' && sign != '*'))	// checks to see if the sign entered is valid
	{
		printf("Not a valid operation.\n");
		exit(0);					// exits the program if it is not
	}
	if (argc != 3)					//checks to see if the correct number of arguments were entered
	{
		printf("Incorrect number of arguments.\n");
		exit(0);					// exits the program if it is not
	}
		
	
	switch (sign)
	{
		case '+':	result = num1 + num2;	// adds the two numbers
					printf("\nOutput: The addition is ");
					break;
		case '-':	result = num1 - num2;	// subtracts the two numbers
					printf("\nOutput: The subtraction is ");
					break;
		case '*':	result = num1 * num2;	// multiplies the two numbers
					printf("\nOutput: The multiplication is ");
					break;			
	}
	
	printf("%d", result);	// prints end result
	
	return 0;
}
