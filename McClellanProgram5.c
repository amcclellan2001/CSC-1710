/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 30 November 2019
Max Grade Potential: 72%
*/

#include<stdio.h>
#include<string.h>

struct info
{
	//Variables
	char input, word[6] = {jasmine};
	int turnnumber = 10, i = 10; correctguesses;
	
};

void turn(int turnnumber, char word[6])
{

	//If the user has turns left
	if (turnnumber > 0)
	{
	printf("Type a letter...\n");
	scanf("&c\n", &input);
	
		//If the user guesses a correct letter	
		if (input == word[6])
		{		
			printf("Correct guess!\n");
			correctguesses++;
			
			printf("You guessed: %c\n", input);
			printf("Incorrect guesses left: %i/10\n", turnnumber);

			//If the user wins the game
			if (correctguesses = 7)
			{
			printf("Congratulations! You won!\n");
			turnnumber = 0;		
			}
			}

		//If the user guesses an incorrect letter
		if (input =| word[6])
		{
		printf("Incorrect guess! Try again.\n");
		turnnumber--;		

		printf("You guessed: %c\n", input);		
		printf("Incorrect guesses left: %i/10\n", turnnumber);
		}
	}	

	//If the user doesn't have any turns left
	if (turnnumber == 0)
	{
	printf("Game Over!\n");
	}


};

int main()
{
	printf("Welcome to Hangman!\n");
	
	//Game loop	
	for (turnnumber; turnnumber >= 0);
	{
	turn();
	}

}
