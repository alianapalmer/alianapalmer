/* 	Name: project9_crimes.c
	Description: Sorts the states by the rate of all violent crimes in descending order.
	Author: Aliana Palmer */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	double total_rate;
};

int int_compare(const void *p, const void *q);

int main()
{
	FILE *rfp, *wfp;
	char file_name[100], new_file_name[100] = "sorted_";
	struct state list[100];
	int i = 0, num_states;
			
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
			// calculates the total crime rate for each country and adds it to the struct
			list[i].total_rate = list[i].assault_rate + list[i].murder_rate + list[i].rape_rate + list[i].vrobbery_rate;
			i++;
		}		
		
	}
	fclose(rfp);		// close the file
	
	num_states = i;		// assign the counting variable to the number of states
	qsort(list, num_states, sizeof(struct state), int_compare);		// calls the qsort function
	
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


int int_compare(const void *p, const void *q)
// compares the elements stored in the total rate variable of the struct
{
	if (((struct state *)p)->total_rate < ((struct state *)q)->total_rate)	// if *p < *q, return 1
		return 1;
	else if (((struct state *)p)->total_rate == ((struct state *)q)->total_rate)  // if *p == *q, return 0
		return 0;
	else
		return -1; // if *p > *q, return -1
}
