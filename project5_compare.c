/* 	Name: project5_compare.c
	Description: Implements a string comparison function that compares two strings of the same length and the letter's
	case does not matter. If the first string is less than the secong one, prints "-1". If the second string is less than
	the first one, prints "1". If the strings are equal, prints "0".
	Author: Aliana Palmer */
#include <stdio.h>
#include <ctype.h>

#define STR_LENGTH 500

int compare(char *s1, char *s2);
void read_line(char *str, int n);

int main()
{
	char str1[STR_LENGTH + 1];
	char str2[STR_LENGTH + 1];
	int comparison;
	
	printf("Enter first string: ");
	read_line(str1, STR_LENGTH);			// calls the read line function to get input from the user for str1
	
	printf("Enter second string: ");
	read_line(str2, STR_LENGTH);			// calls the read line function to get input from the user for str 2
	
	comparison = compare(str1, str2);		// calls the compare function to compare the 2 strings to see if they are equal, less than or greater than
	
	printf("Output: %d", comparison);		// prints the result
	
	return 0;
}

int compare(char *s1, char *s2)
{
	char *p, *q, *end_p, *end_q;
	int flag;
		
	end_p = s1 + STR_LENGTH - 1;		// assign a pointer to the end of str1
	end_q = s2 + STR_LENGTH - 1;		// assign a pointer to the end of str2
	
	for (p = s1; *p != '\0'; p++)		// using an array name as a pointer
	{
		for(q = s2; *p != '\0'; q++)		// using an array name as a pointer
		{
			// if the values in pointer p and pointer q are equal, and the index (using pointer arithmetic) are the same
			// assigns thr flag to 0
			if ((*p == *q ) && ((end_p - p) == (end_q - q)))
			{
					flag = 0;
					break;
			}
			else 
			// if the value in pointer p is less than the value pointer q, and the index (using pointer arithmetic) are the same
			// assigns the flag to -1
			if ((*p < *q ) && ((end_p - p) == (end_q - q)))
			{
					flag = -1;
					break;
			}
			else 
			// if the value in pointer p is greater than the value pointer q, and the index (using pointer arithmetic) are the same
			// assigns thr flag to 1
			if ((*p > *q ) && ((end_p - p) == (end_q - q)))
			{
					flag = 1;
					break;
			}
			
			//the the flag is equal to 1 or -1 exit the for loop, if the flag is equal to 1 continue running the loop.
			if(flag == 1 || flag == -1)
				break;		
		}
	}

	return flag;		// returns the value in the flag	
}

void read_line(char *str, int n)
{
    int ch; int i = 0;

    while ((ch = getchar()) != '\n')	// reads the user input, once it's not an new line character
    {  	
		if (i < n)						// checks to see if the number of characters entered is less than the limit
		{
			*str++ = tolower(ch);		// changes the character entered to lower case before entering it in the string
	      	i++;  						// counter variable	
		}
	  }
    
	*str = '\0';   /* terminates string */
    return;        /* number of characters stored */
}
