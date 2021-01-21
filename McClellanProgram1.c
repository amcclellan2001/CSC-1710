/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 12 September 2019
*/
#include<stdio.h>

int main(void)
{
	
	//Defining the metric system
	int inch = 1;
	int foot = 12;
	int yard = 36;
	int mile = 5280;
	int userinches;

	//User input
	printf("How many inches do you want to calculate?\n");
	scanf("%i", &userinches);

	//Calculating output
	int inchcalc = userinches / 1;
	int footcalc = userinches / 12;
	int yardcalc = userinches / 36;
	int milecalc = userinches / 63360;

	//Display final output
	printf("%i inches is equal to:\n", userinches);
	printf("%i inches\n", inchcalc);
	printf("%i feet\n", footcalc);
	printf("%i yards\n", yardcalc);
	printf("%i miles\n", milecalc);

	return 0;
}
	
	
	
	
