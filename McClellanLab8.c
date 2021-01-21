/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 10 October 2019
*/
#include<stdio.h>

int main()
{
	//Variables
	char imageType[3];
	char comment[256];
	char newlinechar;
	int red, green, blue, x, y, a;	
	int totalxy = x * y;
	int grey = (red * green * blue) / 3;
	int totalpixels = grey;

	//P3 to P2
	scanf("%[^\n]%c", imageType, &newlinechar);
	scanf("%[^\n]%c", comment, &newlinechar);
	scanf("%d %d", &x, &y); 
	
	printf("P2\n");
	printf("%s\n", comment);
	printf("%d %d", x, y);
	

	//Conversion
	for (a < totalxy; a++;)
	{
	scanf("%i %i %i", &red, &green, &blue);
	printf("%i", grey);
	}

	return 0;

}
