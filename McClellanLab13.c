/*
Name: Alex McClellan
Prof: Dr. Pittman
Class: CSC 1710
Date: 21 November 2019
*/
#include<stdio.h>

void ReadImage (struct imageType *filename)
{
	int i, n, red, green, blue, width, height;
	int grey = red * green * blue, image[800][600];
	char newlinechar, Type[3], comment[256];
		
	//Filename
	printf("What is the filename?\n");
	scanf("%s", &filename);

	//Scan-in
	fscanf(filename, "%[^\n]%c", (*filename).Type, &newlinechar);
	fscanf("%[^\n]", (*filename).Type);
	fscanf("%[^\n]", (*filename).comment);
	fscanf("%d %d", (*filename).width, (*filename).height);
	
	//Conversion
	for (i = 0; i < (*filename).height; i++)
	{
		for (n = 0; n < (*filename).width; n++)
			{
				scanf("%s %s %s", (*filename).image[n][i].red, (*filename).image[n][i].green, (*filename).image[n][i].blue);
				printf("%i", grey);
			}
	}
		
};	


int main()
{
	//Struct Declaration
	struct imageType image1, image2;

	ReadImage(&image1);
	ReadImage(&image2);

}
