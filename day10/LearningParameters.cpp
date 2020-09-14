// day10
// LearningParameters.c

#include <stdio.h>

void stars(int n);

int main(void)
{
	int k=8;
	
	stars(k);
	stars(2*k);
	stars(100);
	
	return 0;
}

void stars(int n)
{
	int j;
	
	for(j=1 ; j<=n ; j++)
	{
		printf("*");
	}
	printf("\n");
}
