/* 	Name: project10_roster.c
	Description: The main function that maintains a roster for a youth orchestra program.
				 It uses a dynamically allocated linked list to store the roster
				 and performs the following functions: add, search, print & clear.
	Author: Aliana Palmer */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "student.h"
#include "readline.h"

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

