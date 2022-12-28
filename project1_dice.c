/* Name: project1_dice.c
   Purpose: To simulate a simple dice game. Player with the highest number wins.
   Author: Aliana Palmer */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER 6
#define LOWER 1

int main()
{
	int player1, player2;

	srand(time(NULL));	

	player1 =(rand()%(UPPER - LOWER + 1))+ LOWER;
	player2 =(rand()%(UPPER - LOWER + 1))+ LOWER;

	printf("Player 1's number is %d, Player 2's number is %d. ", player1, player2);

	if (player1 > player2)
		printf("Player 1 wins!\n!");
	else if (player1 < player2)
		printf("Player 2 wins!\n");
	else
		printf("The game is tied!\n");

	return 0;
}

