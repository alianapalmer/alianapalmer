/* 	Name: project7_crimes.c
	Description: Sorts the states by the rate of all violent crimes in descending order.
	Author: Aliana Palmer */
#include <stdio.h>
#include <string.h>
#define STATE_MAX_LEN 150

// struct declaration
struct state
{
	char name[STATE_MAX_LEN+1];
	int population_2019;
	double assault_rate;
	double murder_rate;
	double rape_rate;
	double vrobbery_rate;
};

void sort_states(struct state list[], int n, double total_rate[]);
int find_largest(double total_rate[], int n);

int main()
{
	FILE *rfp, *wfp;
	char file_name[100], new_file_name[100] = "sorted_";
	struct state list[100];
	int i = 0, num_states;
	double total_rate[100] = {0.0};
			
	// asks user to enter the name of file 
	printf("Enter the file name: \n");
	scanf("%s", file_name);
	
	// concatenate the file name entered with the phrase "new_" before it
	strcat(new_file_name, file_name);
	
	printf("Output file name: %s\n", new_file_name);
	  
	rfp = fopen(file_name, "r");		// opens the file name entered for reading
	if(rfp == NULL)						// checks to ensure that the file is not empty
	{
		printf("Error opening file \n");
		return 1;
	}	
	while(!feof(rfp) && !ferror(rfp))	// if the file is not empty, reads the file line by line
	{
		// reads a line from a file and stores each element in a struct attribute
		if(fscanf(rfp, "%[^,],%d,%lf,%lf,%lf,%lf\n", list[i].name, &list[i].population_2019, &list[i].assault_rate, &list[i].murder_rate, &list[i].rape_rate, &list[i].vrobbery_rate) == 6)
		{
			// calculates the total crime rate for each country and stores it in an array
			total_rate[i] = list[i].assault_rate + list[i].murder_rate + list[i].rape_rate + list[i].vrobbery_rate;
			i++;
		}		
		
	}
	fclose(rfp);		// close the file
	
	num_states = i;		// assign the counting variable to the number of states
	sort_states(list, num_states, total_rate);		// calls the sort_states function
	
	wfp = fopen(new_file_name, "w");	// opens the new file for writing
	if(wfp == NULL)						// checks to ensure that the file is opens properly
	{
		printf("Error opening file \n");
		return 1;
	}
	// writes the sorted list to a new file
	for(i = 0; i < num_states ; i++)
	{
		fprintf(wfp, "%s,%d,%.1lf,%.1lf,%.1lf,%.1lf\n", list[i].name, list[i].population_2019, list[i].assault_rate, list[i].murder_rate, list[i].rape_rate, list[i].vrobbery_rate);
	}
	fclose(wfp);		// close the file
	
	return 0;
}

void sort_states(struct state list[], int n, double total_rate[])
{
	int smallest_rate = 0, i, swap;
	struct state temp;
	
	if (n == 1)
		return;
		
	// searches the array for the smallest element's index
	for(i = 1; i < n; i++)
	{
		if (total_rate[i] < total_rate[smallest_rate])	
			smallest_rate = i;
	}
	
	// if the smallest element's index is less than the the last element in the array, swap it
	if(smallest_rate < n-1)
	{
		temp = list[n-1];
		list[n-1] = list[smallest_rate];
		list[smallest_rate] = temp;
		
		// updates the total_rate array
		swap = total_rate[n-1];
		total_rate[n-1] = total_rate[smallest_rate];
		total_rate[smallest_rate] = swap;
	}	
	
	// calls the function to run again
	sort_states(list, n-1, total_rate);	
}
