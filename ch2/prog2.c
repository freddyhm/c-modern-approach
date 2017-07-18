#include <stdio.h>
#include <math.h>

#define FRAC 4.0f/3.0f
#define RADIUS 10.0f

int main(void)
{
	// calculates volume of a sphere
	float volume = FRAC * M_PI * RADIUS * RADIUS * RADIUS;

	printf("the volume of a sphere with %.2f radius is %f\n", RADIUS, v);

	return 0;
}