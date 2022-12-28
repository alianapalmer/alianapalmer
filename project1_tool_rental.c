/* Name: project1_tool_rental.c
   Purpose: Calculates and prints the charges for an equipment or tool rental.
   Author: Aliana Palmer */

#include <stdio.h>

#define MIN_EPW 28	// Minimum fee for the Electric Power Washer
#define MIN_CCE 25	// Minimum fee for the Commercial Carpet Extractor
#define MIN_BPC 32	// Minimum fee for the Battery Powered Chainsaw
#define MIN_DC	51	// Minimum fee for the Drain Cleaner
#define HR_EPW	4	// Hourly rate for the Electric Power Washer
#define HR_CCE	3	// Hourly rate for the Commercial Carper Extractor
#define HR_BPC	5	// Hourly rare for the Battery Powered Chainsaw
#define HR_DC	6	// Hourly rate for the Drain Cleaner
#define MAX_EPW 41	// Maximum daily fee for the Electric Power Washer
#define MAX_CCE 35	// Maximum daily fee for the Commercial Carpet Extractor
#define MAX_BPC 48	// Maximum daily fee for the Battery Powered Chainsaw
#define MAX_DC	78	// Maximum daily fee for the Drain Cleaner

int main()
{
   	int choice, num_hours, amount_due = 0;
    
    	// get tool used from user
   	printf("Please select from the following menu:\n");
    	printf("1. Electric Pressure Washer\n2. Commercial Carpet Extractor\n3. Battery Powered Chainsaw\n4. Drain Cleaner\n");
  	printf("Enter tool selection: ");
    	scanf("%d", &choice);
	
	// input validation	
	if(choice<1 || choice>4)
	{
		printf("That is an invalid number. Program terminating... ");
		return 0;
	}
    
    	// get number of hours rented from user
    	printf("Enter hours rented: ");
    	scanf("%d", &num_hours);
    
    	// input validation
    	while(num_hours<=0)
	{
		printf("That is an invalid number of hours.\n Enter hours rented (>0): ");
       		scanf("%d", &num_hours);
    	}
    
    	switch (choice)
    	{
    		case 1:	if (num_hours <= 4)		// sets the amount due for the minimum if used for up to 4 hours
	    		{
    				amount_due = MIN_EPW;
			}
			else if (num_hours > 4 && num_hours < 24)		// adds the hourly rate to the minimum rate
			{
				amount_due = MIN_EPW + ((num_hours-4)* HR_EPW);
				if(amount_due > MAX_EPW)
				{
					amount_due = MAX_EPW;
				}
			}
			else 	// calculates the days rented and multiplies it by the maximum daily rate and adds the remaining hourly rate
			{
				amount_due = ((num_hours/24) * MAX_EPW) + ((num_hours%24)*HR_EPW);
				if (amount_due > (MAX_EPW * ((num_hours/24) + 1)))
				{
					amount_due = (MAX_EPW * ((num_hours/24) + 1));
				}
			}
			break;
		case 2:	if (num_hours <= 4)		// sets the amount due for the minimum if used for up to 4 hours
    			{
    				amount_due = MIN_CCE;
			}
			else if (num_hours > 4 && num_hours < 24)		// adds the hourly rate to the minimum rate
			{
				amount_due = MIN_CCE + ((num_hours-4)* HR_CCE);
				if(amount_due > MAX_CCE)
				{
					amount_due = MAX_CCE;
				}
			}
			else 	// calculates the days rented and multiplies it by the maximum daily rate and adds the remaining hourly rate
			{
				amount_due = ((num_hours/24) * MAX_CCE) + ((num_hours%24)*HR_CCE);
				if (amount_due > (MAX_CCE * ((num_hours/24) + 1)))
				{
					amount_due = (MAX_CCE * ((num_hours/24) + 1));
				}
			}
			break;
		case 3:	if (num_hours <= 4)		// sets the amount due for the minimum if used for up to 4 hours
    			{
    				amount_due = MIN_BPC;
			}
			else if (num_hours > 4 && num_hours < 24)		// adds the hourly rate to the minimum rate
			{
				amount_due = MIN_BPC + ((num_hours-4)* HR_BPC);
				if(amount_due > MAX_BPC)
				{
					amount_due = MAX_BPC;
				}		
			}
			else 	// calculates the days rented and multiplies it by the maximum daily rate and adds the remaining hourly rate
			{
				amount_due = ((num_hours/24) * MAX_BPC) + ((num_hours%24)*HR_BPC);
				if (amount_due > (MAX_BPC * ((num_hours/24) + 1)))
				{
					amount_due = (MAX_BPC * ((num_hours/24) + 1));
				}
			}
			break;
		case 4:	if (num_hours <= 4)		// sets the amount due for the minimum if used for up to 4 hours
    			{
    			amount_due = MIN_DC;
			}
			else if (num_hours > 4 && num_hours < 24)		// adds the hourly rate to the minimum rate
			{
				amount_due = MIN_DC + ((num_hours-4)* HR_DC);
				if(amount_due > MAX_DC)
				{
					amount_due = MAX_DC;
				}
			}
			else	// calculates the days rented and multiplies it by the maximum daily rate and adds the remaining hourly rate
			{
				amount_due = ((num_hours/24) * MAX_DC) + ((num_hours%24)*HR_DC);
				if (amount_due > (MAX_DC * ((num_hours/24) + 1)))
				{
					amount_due = (MAX_DC * ((num_hours/24) + 1));
				}
			}
			break;
	}
	
	// displays the amount due to user
	printf("Amount due($): %d", amount_due);
    	
    return 0;
}

