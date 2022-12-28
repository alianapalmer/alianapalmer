/* 	Name: project4_sets2.c
	Description: Reads in two sets of numbers A and B, determines whether they are mutally disjoint or not,
	as well as, find the symmetric difference between set A and B.
	Author: Aliana Palmer */
#include <stdio.h>

int are_mutually_disjoint(int *set_a, int *set_b, int n);
void find_symmetric_difference (int *set_a, int *set_b, int n, int *symmetric_difference); 


int main()
{
	int a, b, i, num, n=10, flag;
	int set_a[10] = {0};
	int set_b[10] = {0} ;
	int symmetric_difference[10] = {0};
	
	printf("Enter the number of elements in set A: ");
	scanf("%d", &a);

	printf("Enter the numbers in set A: ");
	for(i = 0; i < a; i++)
	{
		scanf("%d", &num);
		set_a[num] = 1;
	}
	

	printf("Enter the number of elements in set B: ");
	scanf("%d", &b);

	printf("Enter the numbers in set B: ");
	for(i = 0; i < b; i++)
	{
		scanf("%d", &num);
		set_b[num] = 1;
	}
	
	//calls the are_mutually_disjoint function
	flag = are_mutually_disjoint(set_a, set_b, n);
	
	if (flag == 0)
		printf("The two sets are not mutually disjoint.\n");
	else
		printf("The two sets are mutually disjoint.\n");
		
	// calls the find_symmetric_difference function
	find_symmetric_difference (set_a, set_b, n, symmetric_difference);
		
	printf("The symmetric difference is ");
	for(i = 0; i < n; i++)
	{
		// if the element in set_difference is 0 and the element in set A is equal to 1, it should be displayed
		if (symmetric_difference[i] == 0 && (set_a[i] == 1 || set_b[i]== 1))		
			printf("%d ", i);
	}
		
	return 0;
}

// this function determines whether or not the sets are mutually disjoint or not
int are_mutually_disjoint(int *set_a, int *set_b, int n)
{
	int flag = 1, *p, *q, *end_a, *end_b;
	
	end_a = set_a + n - 1;		// assign a pointer to the end of set a
	end_b = set_b + n - 1;		// assign a pointer to the end of set b
	
	for (p = set_a; p <= set_a + n; p++)		// usiing an array name as a pointer
	{
		if (*p == 1)			// if the element in p has a value of 1 do the following
		{
			for(q = set_b; q <= set_b + n; q++)		// using an array name as a pointer
			{
				// checks if any elements at an index in set a is equal in set b
				if ((*p == *q) && ((end_a - p) == (end_b - q))) 
				{
					flag = 0;		// if there is a match, the sets are not mutually disjoint
					break;			// exits the loop
				}			
			}
		}
	}
	
	return flag;
}


// this function determines which values are the same in the array
void find_symmetric_difference (int *set_a, int *set_b, int n, int *symmetric_difference)
{
	int *p, *q, *r, *end_a, *end_b;
	
	end_a = set_a + n - 1;		// assign a pointer to the end of set a
	end_b = set_b + n - 1;		// assign a pointer to the end of set b
	
	r = symmetric_difference;			// assign pointer r to the array beginning of set difference
	
	for (p = set_a; p <= set_a + n; p++, r++)		// using an array name as a pointer
	{
		if (*p == 1)			// if the element in p has a value of 1 do the following
		{
			for(q = set_b; q <= set_b + n; q++)		// using an array name as a pointer
			{
				// if the values in pointer p and pointer q are equal, and the index (using pointer arithmetic) are the same
				// update the index of set difference to 1.
				if ((*p == *q ) && ((end_a - p) == (end_b - q)))
				{
					*r = 1;
				}			
			}
		}
	}
}

