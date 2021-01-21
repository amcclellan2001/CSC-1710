/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 24 October 2019
Lab 9: Creating Arrays
*/

#include<stdio.h>

int main()
{
	//Variables
	int x[5], n, temp;
	int totaldigits, i=0;
	char name[4];
	
	//Reading in amount of arrays
	scanf("%i", &totaldigits);	


	for (i = 0; i < totaldigits; i++)
	{
	scanf("%i", &name[i]);
	}

	//Names
	printf("Names:\n");	
		
	for (i = 0; i < totaldigits; i++)
	{
	printf("name[%i]=%c\n", i, name[i]);
	}

	printf("\n");		

	//Reading an array
	printf("Original array:\n");

	for (i = 0; i <= totaldigits; i++)
	{
	scanf("%i", &x[i]);
	}
	for (i = 0; i <= totaldigits; i++)
	{
	printf("x[%i]=%i\n", i, x[i]);	
	}

	//Swapping elements
	printf("\nSwapping elements:\n");	
	
	//Swap
	temp=x[0];
	x[0]=x[i-1];
	x[i-1]=temp;

	for (i = 0; i <= totaldigits; i++)
	{	
	printf("x[%i]=%i\n", i, x[i]);
	}	

	
	//Reversed array
	printf("\nReversed array:\n");

	totaldigits=0;
		
	for (i = 5; i >= totaldigits; i--)
	{
	printf("x[%i]=%i\n", i, x[i]);
	}	

	
	return 0;

}
	
	
