/*
 * Author: Freddy Hidalgo-Monchez
 * Purpose: Converts 24-hour time into 12-hour form
 */

#include <stdio.h>

int main(void)
{
	int i_hour = 0;
	int i_minutes = 0; 
	int o_hour = 0;
	
	// prompt user for 24hr time
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&i_hour, &i_minutes);

	// convert and print
	if(i_hour > 12){
		o_hour = i_hour - 12; 
		printf("Equivalent 12-hour time: %d:%02d PM\n", o_hour, i_minutes);
	}else if(i_hour < 12){
		o_hour = i_hour;
		printf("Equivalent 12-hour time: %02d:%02d AM\n", o_hour, i_minutes);
	}else{
		o_hour = 12;
		printf("Equivalent 12-hour time: %d:%02d AM\n", o_hour, i_minutes);
	}	

	return 0;
}