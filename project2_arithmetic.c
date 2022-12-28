#include <stdio.h>

/* 	Name: project2_arithemetic.c
	Description: Calculate the result of an arithmetic operation (+, -, *) of two single digit
				 postive integers
	Author: Aliana Palmer */

int main()
{
	int num1, num2, result=0;
	char ch, sign;
	
	printf("Enter input: ");
	while ((ch = getchar()) == ' ')  // accepts the first non-white space character
	;
	num1 = ch - '0';				 // converts the decimal value of the character to an integer
	while ((sign = getchar()) == ' ')// accepts the second non-white space character
	;
	while ((ch = getchar()) == ' ')	// accepts the third non-white space character
	;
	num2 = ch - '0';				// converts the decimal value of the character to an integer
	
	switch (sign)
	{
		case '+':	result = num1 + num2;	// adds the two numbers
					break;
		case '-':	result = num1 - num2;	// subtracts the two numbers
					break;
		case '*':	result = num1 * num2;	// multiplies the two numbers
					break;	
		default:	printf("That is not one of the acceptable operators!");	
					return 0;		
	}
	
	printf("The result is: %d", result);	// prints end result
	
	return 0;
}
