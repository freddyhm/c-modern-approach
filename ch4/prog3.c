/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Reads an integer entered by the user and displays it in octal (base 8):
 */

#include <stdio.h>

int main(void)
{
	int i_num = 0;
	int o_n1 = 0;
	int o_n2 = 0;
	int o_n3 = 0;
	int o_n4 = 0;
	int o_n5 = 0;

	// prompt user for integer
	printf("Enter a number between 0 and 32767:");

	// read input from user
	scanf("%d", &i_num);

	// convert inputted integer into octal
	o_n5 = i_num % 8; // ex: 1953 % 8 = 1
	o_n4 = (i_num / 8 ) % 8; // ex: (1953 / 8) = 244 % 8 = 4
	o_n3 = ((i_num / 8 ) / 8) % 8;
	o_n2 = (((i_num / 8 ) / 8) / 8) % 8;
	o_n1 = ((((i_num / 8 ) / 8) / 8) / 8) % 8;

	// print octal number
	printf("In octal, your number is: %d-%d-%d-%d-%d\n", o_n1, o_n2, o_n3, o_n4, o_n5);

	return 0;
}