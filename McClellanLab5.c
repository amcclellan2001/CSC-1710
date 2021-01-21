/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 19 September 2019
*/
#include<stdio.h>

int main()
{
	
	//Defining variables
	int sum;
	int sum2;
	int sum3;
	float x;
	float x2;
	float x3;
	int hold=1;
	int hold2=1;
	float hold3=1;
	
	//User input
	printf("What is the number of the factorial to calculate?\n");
	scanf("%i", &sum);
	
	//Loop
	for (x=1; x<=sum; x++)
	{
	hold = hold * x;
	}	
		
	//Output
	printf("Your sum is: %i\n", hold);



	
	//User Input 2
	printf("What is the number of the double factorial to calculate?\n");
	scanf("%i", &sum2);

	//Loop 2
	for (x=1; x<=sum2; x+=2)
	{
	hold2 = hold2 * x;
	}

	//Output 2
	printf("Your sum is: %i\n", hold2);	

	


	//User Input 3
	printf("How many times would you like to calculate the geometric series?\n");
	scanf("%i", &sum3);
	
	//Loop 3
	for (x3=1; x3<=sum3; x3++)
	{
	hold3 = hold3 * 0.5;
	}

	//Output 3
	printf("Your sum is: %f\n", hold3);
	
	return 0;

}
