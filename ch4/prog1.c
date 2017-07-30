/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Asks user to enter a two digit number, then print the number with its 
 * 			digits reversed 
 */

#include <stdio.h>

int main(void)
{
	int num = 0;
	int first_num = 0;
	int second_num = 0;

	// prompt user for two digit number
	printf("Enter a two-digit number:");

	// read input
	scanf("%d", &num);

	// break apart the number inputted
	
	// divides and truncates float so we're left with the first number in a two digit number 
	// ex: 45 / 10 = 4.5 = 4
	first_num = num / 10;

	// gives us the last number of a two digit integer
	// ex: 45 % 10 = 5 (4 remainder 5)
	second_num = num % 10;

	// print out result
	printf("The reversal is:%d%d\n", first_num, second_num);

	return 0;
}