/* 	Name: project6_paragraph.c
	Description: Removes the newline characters in the paragraph and replace with white spaces 
	and store it in the output file.
	Author: Aliana Palmer */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 10000

void convert(char *s1, char *s2);

int main()
{
	FILE *rfp, *wfp;
	char str[MAX_LEN+1], new_str[MAX_LEN+1];
	char file_name[100], new_file_name[100] = "new_";
	
	
	// asks user to enter the name of file 
	printf("Enter the file name: \n");
	scanf("%s", file_name);
	
	// concatenate the file name entered with the phrase "new_" before it
	strcat(new_file_name, file_name);
	
	printf("Output file name: %s\n", new_file_name);
	  
	rfp = fopen(file_name, "r");		// opens the file name entered for reading
	wfp = fopen(new_file_name, "w");	// opene the new file for writing
	
	if(rfp == NULL)						// checks to ensure that the file is not empty
	{
		printf("Error opening file \n");
		return 1;
	}
	if(wfp == NULL)						// checks to ensure that the file is not empty
	{
		printf("Error opening file \n");
		return 1;
	}
	
	while(fgets(str, MAX_LEN + 1, rfp) != NULL)	// if the file is not empty, reads the file line by line
	{
		convert(str, new_str);			// calls the convert function
		fputs(new_str, wfp);			// writes the new string to the new file
	}

	fclose(rfp);		// close the file
	fclose(wfp);		// close the file
			
	return 0;
}

void convert(char *s1, char *s2)
{
	char *p, *q;
	
	for(p = s1, q = s2; p < s1 + MAX_LEN ; p++, q++)	
	{
		if (*p != '\n')		// if the character in the first string is not a new line character, add it to the new string
		{
			*q = *p;
		}
		else				// if the character is a new line character, write a white space instead
			*q = ' ';
	}
	
	*q = '\0';	
}
