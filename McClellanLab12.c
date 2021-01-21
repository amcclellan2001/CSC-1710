/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 14 November 2019
*/
#include<stdio.h>

struct pixel
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
};

struct imageType
{
	char Type[3];
	char comment[256];
	int width, height;
	int maxcolor;
	struct pixel image[1000][1000];
};

int main()
{
	//Variables
	int red, green, blue;
	char grey = red * green * blue, i, n, x, newlinechar;
	struct imageType imageA;

	//Scan-in
	fscanf("%[^\n]", &imageA.Type);
	fscanf("%[^\n]", &imageA.comment);
	fscanf("%d %d", &imageA.width, &imageA.height);
	
	//P3 to P6
	printf("P6\n");
	printf("%s\n", imageA.comment);
	printf("%d %d", imageA.width, imageA.height);

	//Conversion
	for (i = 0; i < imageA.height; i++)
	{
		for (n = 0; n < imageA.width; n++)
			{
				scanf("%s %s %s", &imageA.image[n][i].red, &imageA.image[n][i].green, &imageA.image[n][i].blue);
				printf("%c", grey);
			}
	}

	return 0;

}
