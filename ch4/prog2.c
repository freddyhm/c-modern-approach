/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Asks user to enter a three digit number, then print the number with its 
 * 			digits reversed 
 */

#include <stdio.h>

int main(void)
{
	int num = 0;
	int first_num = 0;
	int second_num = 0;
	int third_num = 0;	
	int last_two_num = 0;

	// prompt user for three digit number
	printf("Enter a three-digit number:");

	// read input
	scanf("%d", &num);

	// break apart the number inputted
	
	// divides and truncates float so we're left with the first number in a three digit number 
	// ex: 453 / 100 = 4.53 = 4
	first_num = num / 100;

	// gets the last two numbers by getting the remainder of the operation modulus
	// ex: 453 % 100 = 53
	last_two_num = num % 100;

	// divides and truncates float so we're left with the second number
	// ex: 53 / 10 = 5.3 = 5
	second_num = last_two_num / 10;

	// gives us the third number of a three digit integer  
	// ex: 53 % 10 = 3 
	third_num = last_two_num % 10;

	// print out result
	printf("The reversal is:%d%d%d\n", third_num, second_num, first_num);

	return 0;
}