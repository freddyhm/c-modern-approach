/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Program that breaks down ISBN numbers entered by the user and prints the individual parts out 
 */

#include <stdio.h>

int main(void)
{
	int gsi_prefix = 0;
	int group_identifier = 0;
	int publisher_code = 0;
	int item_number = 0;
	int check_digit = 0;

	// prompt user for ISBN number
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

	// print ISBN broken down into groups
	printf("GS1 prefix: %d\n",gsi_prefix);
	printf("Group identifier: %d\n",group_identifier);
	printf("Publisher code: %d\n",publisher_code);
	printf("Item number: %d\n",item_number);
	printf("Check: %d\n",check_digit); 

	return 0;
}