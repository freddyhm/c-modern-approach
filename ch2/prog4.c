/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Asks users to enter a dollars-and-cents amount, then 
 * 			displays the amount with 5% tax added
 */

#include <stdio.h>

#define TAX 0.05

int main(void)
{
	// prompt user for amount 
	printf("Enter an amount: ");

	float amt = 0;
	scanf("%f", &amt);

	// calculates tax and adds it to the amount
	float total = (amt * TAX) + amt;

	// prints result
	printf("With tax added: $%.2f\n", total);

	// exit 
	return 0;
}