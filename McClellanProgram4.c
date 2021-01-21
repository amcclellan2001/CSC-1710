/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC1710
Date: 24 November 2019
*/

#include<stdio.h>
#include<randomNumber.h>
#include<strings.h>

_Bool FileExists()
{
	FILE &fp;
	char str[60];

	fp = fopen("fighter.dat.", "r");
	
	if (fgets(str, 60, fp) !=NULL )
	{
	puts(str);
	}

	fclose(fp);

};


void qpress(char userinput, char quit)
{
	char userinput, quit;

	printf("Would you like to quit? Press "q" to quit, "c" to continue.\n");
	scanf("%c", &quit);
	
	if(quit == q)
	{
	break;
	}		 
	
	if(quit == c)
	{
	continue;
	}
};

struct fighter()
{
	int hp = 30, wins;
	char name[];	
		

};

int main()
{
	
	qpress();	

	while (quit != q)
	{
	printf("Welcome to the arena!\n");
	FileExists();
	
	struct fighter Bob, George;

	
	
	}

}	
