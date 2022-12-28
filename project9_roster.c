/* 	Name: project9_roster.c
	Description: Maintains a roster for a youth orchestra program.
				 It uses a dynamically allocated linked list to store the roster
				 and performs the following functions: add, search, print & clear.
	Author: Aliana Palmer */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define EMAIL_LEN 100
#define NAME_LEN 30
#define INSTRUMENT_LEN 30
#define GROUP_LEN 30

struct student
{
	char first[NAME_LEN+1];
	char last[NAME_LEN+1];
	char email[EMAIL_LEN+1];
	char instrument[INSTRUMENT_LEN+1];
	char group[GROUP_LEN+1];
	struct student *next;
};

struct student *add(struct student *list);
void search(struct student *list);
void print_list(struct student *list);
void clear_list(struct student *list);
int read_line(char str[], int n);
struct student *remove_from_list(struct student *list);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(void)
{
  char code;

  struct student *student_list = NULL;  
  printf("Operation Code: a for adding to the list, s for searching"
	  ", p for printing the list, r for deleting a student; q for quit.\n");
  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'a': student_list = add(student_list); 	// calls the add function
                break;
      case 's': search(student_list);				// calls the search function
                break;
      case 'p': print_list(student_list);			// calls the print function
                break;
      case 'r': student_list = remove_from_list(student_list);		// calls the remove from list function
      			break;
      case 'q': clear_list(student_list);			// calls the clear function
				return 0;							// terminates the program
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

// adds a student's information to the end of the linked list
struct student *add(struct student *list){

	struct student *new_student, *p;
	char first[NAME_LEN+1];
	char last[NAME_LEN+1];
	char email[EMAIL_LEN+1];
	char instrument[INSTRUMENT_LEN+1];
	char group[GROUP_LEN+1];

	printf("Enter the last name:");
	read_line(last, NAME_LEN+1);			// calls the read line function to accept user input (last name)
	
	printf("Enter the first name:");
	read_line(first, NAME_LEN+1);			// calls the read line function to accept user input (first name)
	
	printf("Enter the email:");
	read_line(email, EMAIL_LEN+1);			// calls the read line function to accept user input (email)
	
	printf("Enter the instrument:");
	read_line(instrument, INSTRUMENT_LEN+1);	// calls the read line function to accept user input (instrument)
	
	printf("Enter the group:");
	read_line(group, GROUP_LEN+1);			// calls the read line function to accept user input (group)

	// input validation: checks to see that the information inputted does not already exist
	for (p = list; p != NULL; p = p->next)
	{
	    if ((strcmp(p->last,last) == 0) && strcmp(p->email, email) == 0)
	    {
	    	printf("\nThis student already exists\n");
	    	return list;
	    }
	}
	
	// allocates space to store new struct
	new_student= malloc(sizeof(struct student));
	if (new_student == NULL)
	{
		printf("malloc failed in add_to_list\n");
	    return list;
	}
	
	// copies the information from the user input into the struct
	strcpy(new_student->first, first);
	strcpy(new_student->last, last);
	strcpy(new_student->email, email);
	strcpy(new_student->instrument, instrument);
	strcpy(new_student->group, group);
	
	
	if(list == NULL)
	{
		return new_student;		// if the list points to NULL, return the pointer to the student
	}
	else
	{
		p = list;					// assigns p to the start of the list
		while (p->next != NULL) 	// iterates until p->next = NULL (last)
		{
			p = p->next;
		}

		new_student->next = NULL;	// assigns new_student->next to NULL (place at end of list)
		p->next = new_student;		// assigns p->next to point at the new_student struct

		return list;
	}
	
}

// finds a student by last name and first name. If no student is found, print a message
void search(struct student *list)
{
	struct student *p;
	char first[NAME_LEN+1], last[NAME_LEN+1];
	int flag = 0;
	
	printf("Enter student's last name:");
	read_line(last, NAME_LEN+1);
	
	printf("Enter student's first name:");
	read_line(first, NAME_LEN+1);
	
	// checks the linked list to see if the student entered exists and print the information
	for (p = list; p != NULL; p = p->next)
	{
	    if (strcmp(p->first, first) == 0 && strcmp(p->last, last) == 0)
	    {
	    	flag = 1;
	    	printf("\n%s\t%s\t%s\t%s\t%s", p->last, p->first, p->email, p->instrument, p->group);    	
		}
	}
	printf("\n");
	
	// if the student is not found, prints a message
	if (flag == 0)
		printf("No student with that name found.\n");
}

// prints all the students' information
void print_list(struct student *list)
{
  	struct student *p;
  	
	for(p = list; p != NULL; p = p->next)
		printf("\n%s\t%s\t%s\t%s\t%s", p->last, p->first, p->email, p->instrument, p->group);
	printf("\n");
}

// when the user exits the program, all the memory allocated for the linked list should be deallocated
void clear_list(struct student *list)
{
  struct student *p;
  
  while(list != NULL)
  {
	p = list;
    list = list->next;
    if( p!= NULL)
        free(p);
  }
}

// reads input from the user
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    ;
  str[i++] = ch;
  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = ch;
    
   }
   str[i] = '\0';
   return i;
}

struct student *remove_from_list(struct student *list)
{
	struct student *cur, *prev;
	char first[NAME_LEN+1];
	char last[NAME_LEN+1];
	char email[EMAIL_LEN+1];
	
	printf("Enter student's last name:");
	read_line(last, NAME_LEN+1);			// calls the read line function to accept user input (last name)
	
	printf("Enter student's first name:");
	read_line(first, NAME_LEN+1);			// calls the read line function to accept user input (first name)
	
	printf("Enter the email:");
	read_line(email, EMAIL_LEN+1);			// calls the read line function to accept user input (email)
	
	// searches for the struct that stores the data entered by the user
	for(cur = list, prev = NULL; cur != NULL; prev = cur, cur = cur->next)
	{
		if((strcmp(last, cur->last) == 0) && (strcmp(first, cur->first) == 0) && (strcmp(email, cur->email) == 0))
			break;
	}
		
	if(cur == NULL)		// the student entered is not found
	{
		printf("Student does not exist");
		return list;
	}
	// the student found is at the start of the list and the head of the linked list is changed to the second element
	if(prev == NULL)	
	{
		list = list->next;
	}
	// otherwise the student is removed by linking the element before and after the element that is being removed
	else
		prev->next = cur->next;
		
	// free cur	
	free(cur);
	return list;
}
