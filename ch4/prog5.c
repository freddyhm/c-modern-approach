/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Checks if the UPC code for a product is valid
 */

#include <stdio.h>

int main(void)
{	
	int d, f1, f2, f3, f4, f5, 
	    s1, s2, s3, s4, s5 = 0;

	int first_sum, second_sum, total = 0;


	// prompt user to enter UPC code
	printf("Enter your UPC code:");

	// read input from user
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &f1, &f2, &f3, &f4, &f5,&s1, &s2, &s3, &s4, &s5);

	// calculate sums and total
	first_sum = d + f2 + f4 + s1 + s3 + s5;
	second_sum = f1 + f3 + f5 + s2 + s4;
	total = 3 * first_sum + second_sum;

	// print check digit
	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}