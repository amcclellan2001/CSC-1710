/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 31 October 2019
Lab 10 Array
*/

#include<stdio.h>
#include<strings.h>
void LoadArray()
{
	scanf("%s", names[i]);

}
void PrintArray()
{

	int i = 0;

	for (i = 0; i < 6; i++)
	{
	printf("name[%i]=%s\n", i, names[i]);
	}

}

void SortArray()
{

	char temp;
	
	temp=names[0][i];
	names[0][i]=names[4][i];
	names[4][i]=temp;

}
void ReadChar()
{

	char temp, letter;
	
	scanf("%c", &letter);

}

void FindMatch(char letter)
{
	if (letter == match)
	{
	printf("Found matches!\n");
	printf("%c", match);
	}
}	

int main()
{
	//Variables
	int i, j;
	char names[5][10], letter, match, temp;

	//Array of Names
	printf("Original Array:\n");
	
	for (i = 0; i < 6; i++)
	{
	scanf("%s", names[i]);	
	printf("name[%i]=%s\n", i, names[i]);
	}

	//Sorted Array
	printf("\nSorted Array:\n");

	swap(names);
	
	for (i = 0; i < 6; i++)
	{
		printf("name[%i]=%s\n", i, names[i]);	
	}
	
	//Searching
	printf("\nSearching for a character\n");

	scanf("%1c", match);
	
	if (match == names[i])
	{
		printf("Matching names\n");	
		printf("%c\n", match);
	}
	else
	{
		printf("No matching names.\n");
	}
	
	printf("\nProgram complete.\n");

}
