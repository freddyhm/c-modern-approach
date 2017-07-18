#include <stdio.h>
#include <math.h>

#define FRAC 4.0f/3.0f

int main(void)
{
	// prompt user for radius
	float radius = 0; 
	printf("what is your radius?:");

	// input radius
	scanf("%f", &radius);

	// calculate volume of a sphere
	float volume = FRAC * M_PI * radius * radius * radius;

	// print out message
	printf("the volume of a sphere with %.2f radius is %f\n", radius, v);

	return 0;
}