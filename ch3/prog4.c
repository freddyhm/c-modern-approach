/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Program that prompts user to enter a telephone number and then displays it
 */

#include <stdio.h>

int main(void)
{
	int area_code = 0;
	int first_digits = 0;
	int last_digits = 0;

	// prompt user to enter a phone number
	printf("Enter phone number [(xxx) xxx-xxxx]:");
	scanf("(%d) %d-%d", &area_code, &first_digits, &last_digits);

	// print entered phone number
	printf("You entered: %d.%d.%d\n", area_code, first_digits, last_digits);

	return 0;
}