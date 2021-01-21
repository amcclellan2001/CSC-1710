/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 8 October 2019
*/

#include<stdio.h>
#include<stdlib.h>
	
int main()
{
	//Variables
	int paymentnumber, currentmonth=1, x;
	float purchaseprice, monthlypayment, monthlyinterest, balanceleft, interesttotal, finalpayment, interestcalc, annualinterest, principal, balance;	

	//User input
	printf("How much is the purchase price of the house?\n");
	scanf("%f", &purchaseprice);
	
	printf("What is the annual interest rate (in percentage)?\n");
	scanf("%f", &annualinterest);
	
	printf("How many payments are you making on the house?\n");
	scanf("%i", &paymentnumber);
	
	//UI
	printf("Annual Interest | Current Month | Monthly Payment | Balance Left\n");
	printf("----------------------------------------------------------------\n");
	
	//Calculations
	monthlyinterest = annualinterest / 12;	
	monthlypayment = purchaseprice / paymentnumber;	
	
	while (currentmonth < paymentnumber + 1)
	{
	interestcalc = monthlypayment * monthlyinterest;
	interesttotal = interestcalc +  monthlypayment;
	finalpayment = monthlypayment + interesttotal; 	
	purchaseprice = purchaseprice - finalpayment;	

	printf("%.3f          %7i            $%7.2f           $%7.2f\n", annualinterest, currentmonth, finalpayment, purchaseprice);
	currentmonth = currentmonth + 1;
	
	}
	
	printf("---------------------------------------------------------------\n");
	
	
	return 0;
}
