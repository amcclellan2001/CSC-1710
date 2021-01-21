/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 6 November 2019
*/

#include<stdio.h>
#include<strings.h>

int main()
{
	//Variables
	int i, j, hole = 1, temp;
	int par[18], scores[4][18];
	char players[4];

	//Data Entry
	scanf("%i", &par);
	scanf("%c", &players);
	scanf("%i", &scores);

	//Calcualations
	printf("                  The Scorecard\n");

	for (i = 0; i < 4; i++)
	{
	
		for (j = 0; j < 18; j++)
		{
		
		printf("Hole %i: %c = %i\n", hole, players[i], scores);
		hole++;
			if(j > 16)
			{
			printf("%c[i]\n", players[i]);
			hole = 1;
			}
		}
	}
}
