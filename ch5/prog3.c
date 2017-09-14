/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Calculates a competitor broker's commission
 */

#include <stdio.h>

int main(void)
{
	int shares = 0;
	float rival_base = 33.0f;
	float price = 0.0f;
	float rival_fee = 0.0f;

	// prompt user for number of shares and price per share
	printf("How many shares did you purchase?: ");
	scanf("%d", &shares);

	printf("How much was the price per share?: ");
	scanf("%f", &price);	

	// calculate competitor's fee
	float scale = shares < 2000 ? (0.03f * shares) : (0.02f * shares);
	rival_fee = rival_base + scale; 

	printf("Commission from competitor broker: $%.2f\n", rival_fee);
	return 0;
}
