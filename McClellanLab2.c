#include<stdio.h>

int main(void)
{
	//Defining bills variables
	int bills20=0;
	int bills10=0;
	int bills5=0;
	int bills1=0;

	//User input
	printf("Enter number of $20 bills: \n");
	scanf("%i", &bills20);
	
	printf("Enter number of $10 bills: \n");
	scanf("%i", &bills10);

	printf("Enter number of $5 bills: \n");
	scanf("%i", &bills5);

	printf("Enter number of $1 bills: \n");
	scanf("%i", &bills1);

	//Calculating the total
	int total = bills20 * 20 + bills10 * 10 + bills5 * 5 + bills1 * 1;

	//Display final total
	printf("Your total is: $%i\n", total);
}
