/* 	Name: project4_sets1.c
	Description: Reads in two sets of numbers A and B, calculates and print the difference of the sets A-B.
	Author: Aliana Palmer */
#include <stdio.h>

void find_set_difference(int *set_a, int *set_b, int n, int *set_difference);

int main()
{
	int a, b, i, num, n = 10;
	int set_a[10] = {0};			// initialize set a to 0
	int set_b[10] = {0} ;			// initialize set b to 0
	int set_difference[10] = {0};	// initialize set difference to 0
	
	// asks user to enter the number of elements in set A
	printf("Enter the number of elements in set A: ");
	scanf("%d", &a);
	printf("\n");
	printf("Enter the numbers in set A: ");
	for(i = 0; i < a; i++)			// the for loop terminates after running for number of elements entered
	{
		scanf("%d", &num);			// accepts a number from the user
		set_a[num] = 1;				// assigns the index number entered by the user in set A to 1
	}
	
	printf("\n");
	
	// asks user to enter the number of elements in set B
	printf("Enter the number of elements in set B: ");
	scanf("%d", &b);
	printf("\n");
	printf("Enter the numbers in set B: ");
	for(i = 0; i < b; i++)			// the for loop terminates after running for number of elements entered
	{
		scanf("%d", &num);			// accepts a number from the user
		set_b[num] = 1;				// assigns the index number entered by the user in set B to 1
	}
	
	printf("\n");
	
	find_set_difference(set_a, set_b, n, set_difference);	// call the find_set_difference function
	
	
	// displays the A-B
	printf("The difference of set A and B: ");
	for(i = 0; i < n; i++)
	{
		// if the element in set_difference is 0 and the element in set A is equal to 1, it should be displayed
		if (set_difference[i] == 0 && set_a[i] == 1)		
			printf("%d ", i);
	}
		
	return 0;
}


// This function finds the difference of set A minus set B
void find_set_difference(int *set_a, int *set_b, int n, int *set_difference)
{
	int *p, *q, *r, *end_a, *end_b;

	end_a = set_a + n - 1;		// assign a pointer to the end of set a
	end_b = set_b + n - 1;		// assign a pointer to the end of set b
	
	r = set_difference;			// assign pointer r to the array beginning of set difference
	
	for (p = set_a; p <= set_a + n; p++, r++)		// using an array name as a pointer
	{
		if (*p == 1)			// if the element in p has a value of 1 do the following
		{
			for(q = set_b; q <= set_b + n; q++)		// using an array name as a pointer
			{
				// if the values in pointer p and pointer q are equal, and the index (using pointer arithmetic) are the same
				// update the index of set difference to 1.
				if ((*p == *q )&& ((end_a - p) == (end_b - q)))
				{
					*r = 1;
				}			
			}
		}
	}
}
