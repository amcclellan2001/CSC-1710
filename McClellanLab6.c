/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 26 September 2019
Dir: home/students/amcclellan/csc1710/lab6
Desc: A temperature converter from Fahrenheit into Celcius and Kelvin
*/

#include<stdio.h>

int main()
{
	//Defining variables
	float fahrenheit, celcius, kelvin, n;

	//User input
	printf("What temperature (in Fahrenheit between -273 and 212) do you want to calculate?\n");
	scanf("%f", &fahrenheit);
	
	printf("Calculating for %f...\n", fahrenheit);
	
	//Table Creation
	printf("Fahrenheit       Celcius       Kelvin\n");
	printf("-------------------------------------\n");
	
	//Calculations
	for (n=fahrenheit; n < 213; n++)
	{
	celcius = (n - 32) * 5/9;
	kelvin = celcius + 273.15;
	printf("%.3f     |    %5.3f     |    %5.3f\n", n, celcius, kelvin);	
	}

	//Ending code
	while (n > 212)
	{	
	printf("------------------------------------\n");
	printf("Calculations complete.\n");
	break;
	}

	return 0;

}
