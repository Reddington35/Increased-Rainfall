#include <stdio.h>
#include "stdafx.h"
#include "String.h"

void DisplayInstructions();
int HigherRainfall(int year1[12], int year2[12]);
int DisplayAnswers(int r);

void main()
{
	int k = 0;
	int i = 0;
	int R = 0;
	int year1[12], year2[12];
	char yes;

	do {
		DisplayInstructions();
		printf("Year1\n");
		for (i = 0; i < 12; i++)
		{

			printf("Enter figure for month%d:", i + 1);
			scanf_s("%d", &k);
			year1[i] = k;
		}
		printf("Year2\n");
		for (i = 0; i < 12; i++)
		{

			printf("Enter figure for month%d:", i + 1);
			scanf_s("%d", &k);
			year2[i] = k;
		}

		R = HigherRainfall(year1, year2);
		DisplayAnswers(R);
		printf("Do You want to repeat the program press y to repeat:");
		scanf_s("%c\n", &yes);
		yes = getchar();
		
	} while (yes == 'y'|| yes=='Y');
	} 
	
void DisplayInstructions()
{
	printf("Display Instructions\n");
	printf("This program is designed to show the user if there has been,\n");
	printf("an increase in rainfall and which months have had the increase\n");
}
int HigherRainfall(int year1[12], int year2[12])
{
	int i = 0;
	int R = 0;
	for (i = 0; i < 12; i++)
	{
		if (year1[i] < year2[i])
		{
			R++;
		}
		else
		{
			i++;
		}
	}
	return R;
}
int DisplayAnswers(int r)
{

	printf("This many months had higher rainfall than the previous year:%d\n", r);
	return r;

}