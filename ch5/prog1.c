/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Calculates how many digits an inputted number contains
 */

#include <stdio.h>

int main(void)
{
	int num = 0;

	// prompt user for a number
	printf("Enter a number: ");
	scanf("%d", &num);

	// determine if it is 1 or more digits assuming number is bigger than 0
	if(num <= 9){
		printf("The number has 1 digit\n");    
	}else if(num <= 99){
		printf("The number has 2 digits\n");
	}else if(num <= 999){
		printf("The number has 3 digits\n");
	}else{
		printf("The number has 4 digits\n");
	}

	return 0;
}
