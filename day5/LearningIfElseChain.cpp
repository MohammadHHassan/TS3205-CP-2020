// day5
// LearningIfElseChain.c

#include <stdio.h>

int main(void)
{
	char status;
	
	printf("Please enter your marital status (M,S,D,W): ");
	scanf(" %c", &status);
	
	if(status == 'M' || status == 'm')
	{
		printf("Married.\n");
	}
	else if(status == 'S' || status == 's')
	{
		printf("Single.\n");
	}
	else if(status == 'D' || status == 'd')
	{
		printf("Divorced.\n");
	}
	else if (status == 'W' || status == 'w')
	{
		printf("Widowed.\n");
	}
	else
	{
		printf("Invalid character. You are only allowed to enter M, S, D or W.\n");
	}
	
	printf("Thank you!");
	
	return 0;
}







