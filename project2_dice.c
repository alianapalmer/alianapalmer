/* Name: project2_dice.c
   Purpose: To simulate a simple dice game. Player with the highest number wins.
   Author: Aliana Palmer */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER 6
#define LOWER 1

int main()
{
	int player1, player2, player1_wins, player2_wins, num_rounds, i;
	
	srand(time(NULL));
	
	printf("Enter the number of rounds: ");	// Accepts input from user
	scanf("%d", &num_rounds);
	
	for(i=0; i<num_rounds; i++)		// runs for as long as the user entered
	{	

		player1 =(rand()%(UPPER - LOWER + 1))+ LOWER; 	//assigns player 1 a random number
		player2 =(rand()%(UPPER - LOWER + 1))+ LOWER;	//assigns player 2 a random number

		printf("Round %d: Player 1's number is %d, Player 2's number is %d.\n", i+1, player1, player2); 

		if (player1 > player2)
			player1_wins +=1;		// if player 1 wins, add it to their tally
		else if (player1 < player2)
			player2_wins +=1;		// if player 2 wins, add it to their tally
	}
		
	if (player1_wins > player2_wins)	// player 1 wins if they have a larger tally
		printf("Player 1 wins!\n!");	
	else if (player1_wins < player2_wins) // player 2 wins if they have a larger tally
		printf("Player 2 wins!\n");
	else								// player 1 and 2 have the same score
		printf("The game is tied!\n");

	return 0;
}

