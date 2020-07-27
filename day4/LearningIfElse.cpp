// day4
// LearningIfElse.c

#include <stdio.h>

int main(void)
{
	int j, k, remainder;
	
	printf("Please enter the value of j: ");
	scanf(" %d", &j);
	printf("Please enter the value of k: ");
	scanf(" %d", &k);
	
	remainder = j%k;
	
	if(remainder==0)
	{
		printf("%d (j) is DIVISIBLE by %d (k)", j, k);
		printf("\nNo remainder.");
	}
	else
	{
		printf("%d (j) is NOT DIVISIBLE by %d (k)", j, k);
		printf("\nRemainder = %d", remainder);
	}
	
	printf("\nThank you.");
	
	return 0;
}
