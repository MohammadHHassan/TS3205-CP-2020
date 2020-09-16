// day11
// LearningRecursion.c

#include <stdio.h>

int factorial(int y);

int main(void)
{
	int n;
	
	printf("Please enter a value: ");
	scanf(" %d", &n);
	
	printf("%d! = %d", n, factorial(n));
	
	return 0;
}

int factorial(int y)
{
	if(y==1)
	{
		return 1;
	}
	else
	{
		return y*factorial(y-1);
	}
}
