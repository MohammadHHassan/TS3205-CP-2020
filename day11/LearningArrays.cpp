// day11
// LearningArrays.c

#include <stdio.h>

int main(void)
{
	double u[3] = {1.0, 2.0, 3.0};
	double s[3];
	int j;
	
	printf("u = (%.1f, %.1f, %.1f)\n\n", u[0], u[1], u[2]);
	
	for(j=0 ; j<3 ; j++)
	{
		printf("%.1f\t", u[j]);
	}
	
	for(j=0 ; j<3 ; j++)
	{
		s[j] = u[j]*2.0;
	}
	
	printf("\n\ns[j] = u[j]*2.0\n");
	printf("s = (%.1f, %.1f, %.1f)\n\n", s[0], s[1], s[2]);
	
	for(j=0 ; j<3 ; j++)
	{
		printf("s[%d] = %.1f\n", j, s[j]);
	}
	
	return 0;
}
