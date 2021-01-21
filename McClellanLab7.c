/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 3 October 2019
*/

#include<stdio.h>

int main()
{
	//Variables
	int usernumber = 1234, digit;
	int i = 2;
	int div = 1000;

	printf("What number would you like to calculate?\n");
	scanf("%i", &usernumber);
	
	//Calculations
	while (i < 6)
	{
	digit = usernumber / div;
	
	switch (digit)
	{
		case 0:
		{
		printf("zero ");
		break;
		}
		case 1:
		{
		printf("one ");
		break;
		}
		case 2:
		{
		printf("two ");
		break;
		}
		case 3:
		{
		printf("three ");
		break;
		}
		case 4:
		{
		printf("four ");	
		break;
		}
		case 5:
		{
		printf("five ");
		break;
		}
		case 6:
		{
		printf("six ");
		break;
		}
		case 7:
		{
		printf("seven ");
		break;
		}
		case 8:
		{
		printf("eight ");
		break;
		}
		case 9:
		{
		printf("nine ");
		break;
		}
	}	
	usernumber = usernumber % div;
	div = div / 10;
	i = i + 1;
	
	while (i >= 6)
	{
	printf("\n");
	break;
	}
	}
	return 0;	
}
