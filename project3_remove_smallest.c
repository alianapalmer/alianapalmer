/* 	Name: project3_remove_smallest.c
	Description: Removes k number of smallest elements in an input array and displays the remaining values.
	Author: Aliana Palmer */

#include <stdio.h>

int remove_smallest_numbers(int a[], int n, int k);	//function remove_smallest_numbers declaration
int find_smallest_index(int a[], int n, int smallest);  //function find_smallest_index declaration

int main()
{
	int i, n, k, final;

	// accepts the length of the array from the user
	printf("Enter the number of elements in set A: ");
	scanf("%d", &n);

	int a[n];	// declaration of the array

	// accepts the elements in the array from the user
	printf("Enter the %d elements in set A: ", n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}

	// accepts the number of smallest elements the user wishes to remove
	printf("Enter the number of smallest elements to be removed: ");
	scanf("%d", &k);

	final = remove_smallest_numbers(a, n, k);	// calls the remove_smallest_numbers function

	// prints the final result
	for(i = 0 ; i < final ; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}


/* Removes k smallest numbers from the array by shifting numbers to the left or right depending on the location
of the smallest number. Returns the remaining values in the array to the calling function.*/
int remove_smallest_numbers(int a[], int n, int k)
{
	int smallest=0, i, j=0;

	// iterates to find the smallest value in the array and remove it from the array
	for(i = 0 ; i < k ; i++)
	{
		smallest = find_smallest_index(a, n, smallest);	// calls the find_smallest_index function

		// if the smallest element in the array is the last element, removes it by assigning it the preceeding index's value
		if (a[smallest] == a[n-1])
		{
			a[smallest] = a[n-2];
		}

		//removes the smallest number in the array by shifting the other elements to the left
		for(j = (smallest+1) ; j < n ; j++)
		{
			a[j-1] = a[j];
		}
	}

	return (n-k);
}

// Locates which index holds the smallest value and returns it to the calling function.
int find_smallest_index(int a[], int n, int smallest_index)
{
    int i;

    //finds the smallest element in the array by comparing it to all the elements present
   	for(i = 0 ; i < n ; i++)
	{
		if(a[i] < a[smallest_index])
			smallest_index = i;		// assigns the index the index of the smallest value
	}

	return smallest_index;		//returns the value of the smallest index
}







