/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Program that accepts a date from a user 
 *          and then displays it in a different format
 */

#include <stdio.h>

int main(void)
{
	// prompt user for input
	printf("Enter a date (mm/dd/yyyy): ");

	int month = 0;
	int day = 0;
	int year = 0;

	// read input from user
	scanf("%d/%d/%d", &month, &day, &year);

	// print out with special format
	printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

	return 0;
}