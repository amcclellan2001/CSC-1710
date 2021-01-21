/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 5th September 2019
*/

#include<stdio.h>

int main(void)
{
	//Defining floats
	float lab1; float lab2; float lab3; float lab4;
	float quiz1; float quiz2; float quiz3;
	float program;
	float test;

	//Asking the user for input
	printf("What is your first lab grade?\n");
	scanf("%f", &lab1);

	printf("What is your second lab grade?\n");
	scanf("%f", &lab2);

	printf("What is your third lab grade?\n");
	scanf("%f", &lab3);

	printf("What is your fourth lab grade?\n");
	scanf("%f", &lab4);

	printf("What is your first quiz grade?\n");
	scanf("%f", &quiz1);

	printf("What is your second quiz grade?\n");
	scanf("%f", &quiz2);

	printf("What is your third quiz grade?\n");
	scanf("%f", &quiz3);

	printf("What is your program grade?\n");
	scanf("%f", &program);

	printf("What is your test grade?\n");
	scanf("%f", &test);

	//Calculating score
	float labpre1 = lab1 * 10;
	float labpre2 = lab2 * 10; 
	float labpre3 = lab3 * 10;
	float labpre4 = lab4 * 10;
	float quizpre1 = quiz1 * 10; 
	float quizpre2 = quiz2 * 10; 
	float quizpre3 = quiz3 * 10;
	float labaverage = ((labpre1 + labpre2 + labpre3 + labpre4) / 4)  * 0.10;
	float quizaverage = ((quizpre1 + quizpre2 + quizpre3) / 3) * 0.10;
	float programaverage = (program / 1) * 0.30;
	float testaverage = (test / 1) * 0.30;

	//Debug
	printf("Lab Average: %f\n", labaverage);
	printf("Quiz Average: %f\n", quizaverage);
	printf("Program Average: %f\n", programaverage);
	printf("Test Average: %f\n", testaverage);

	//Calculating total
	float total = labaverage + quizaverage + programaverage + testaverage;
	
	//Final total
	printf("Your final grade is: %f\n", total);

	return 0;
}
