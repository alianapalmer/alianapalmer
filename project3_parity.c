/* Name: project3_parity.c
   Description:  to determine if the parity (even or odd) of each index matches the parity 
   (even or odd) element at that index. 
   Author: Aliana Palmer */

#include <stdio.h>

int main() 
{
	int i, n, index, element, parity;		// declaration of variables
	
	printf("Enter the length of the array: ");	// accepts the length of the array from user
	scanf("%d", &n);
	
	int a[n];		// initialize array
	
	printf("Enter the elements of the array: ");	// accepts values from user to populate array
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		index = i%2;		// finds the whether the index is odd or even by using the modulus of 2
		element = a[i]%2;	// finds the whether the element is odd or even by using the modulus of 2
		if (index == element)	// if the value in element and index are equal, the flag remains the same.
		{
			parity = 0;
		}
		else
		{
			parity = 1;		// if the value in element and index are not equal, the for loop terminates.
			break;
		}
	}
	
	// display statements
	if (parity == 0)
		printf("\nparities of elements match parities of indices.");
	else
		printf("\nparities of elements do not match parities of indices");
	
	return 0;
}
