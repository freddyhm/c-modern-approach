/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Program that formats product information entered by the user 
 */

#include <stdio.h>

int main(void)
{
	// store the item
	int item_num = 0;
	float unit_price = 0.0f;  

	// store the date
	int month = 0;
	int day = 0;
	int year = 0;

	// prompt user for item number
	printf("Enter item number: ");

	// read user input for item number
	scanf("%d", &item_num);

	// prompt user for item price
	printf("Enter unit price: ");

	// read user input for unit price
	scanf("%f", &unit_price);

	// prompt user for purchase date
	printf("Enter purchase date (mm/dd/yyyy): ");

	// read user input for purchase date
	scanf("%d/%d/%d", &month, &day, &year);

	// print out special header
	printf("Item\t\t\tUnit\t\t\tPurchase\n");
	printf("\t\t\tPrice\t\t\tDate\n"); 

	// print out special format
	// "-" left justifies and with %7.2f the "7" is the number of characters including the . and the 2 is the num after the decimal
	printf("%-d\t\t\t$%7.2f\t\t%-.2d/%-.2d/%-d\n", item_num, unit_price, month, day, year);

	return 0;

}