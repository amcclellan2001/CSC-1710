/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 12 September 2019
*/

#include<stdio.h>

int main(void)
{
	//Defining floats
	int p=17,q=4,r=3;
	float j=3.00,k=5.0;

	float equation1 = p - q * r;
	float equation2 = p / r;
	float equation3 = p % r;
	float equation4 = p/q/r;
	float equation5 = q + r % p;
	float equation6 = q * j / p;
	float equation7 = p / q / j;
	float equation8 = p / j / q;
	float equation9 = k/=r/q;
	float equation10 = j / -q;
	float equation11 = p * r / 2;
	
	//Equations
	printf("Equation 1\n");
	printf("Answer: %f\n", equation1);

	printf("Equation 2\n");
	printf("Answer: %f\n", equation2);

	printf("Equation 3\n");
	printf("Answer: %f\n", equation3);

	printf("Equation 4\n");	
	printf("Answer: %f\n", equation4);

	printf("Equation 5\n");
	printf("Answer: %f\n", equation5);

	printf("Equation 6\n");
	printf("Answer: %f\n", equation6);

	printf("Equation 7\n");
	printf("Answer: %f\n", equation7);

	printf("Equation 8\n");
	printf("Answer: %f\n", equation8);

	printf("Equation 9\n");
	printf("Answer: %f\n", equation9);

	printf("Equation 10\n");
	printf("Answer: %f\n", equation10);

	printf("Equation 11\n");
	printf("Answer: %f\n", equation11);
	
	return 0;
}
