// day 11
// LearningVariables.c

#include <stdio.h>

void test(int y);		// Declaring function test with parameter y (int)

int main(void)
{
	int x=1;			// Local variable
	
	printf("1. x = %d\n", x);
	test(x);			// Calling the function 'test'
	printf("4. x = %d", x);
	
	return 0;
}

void test(int y)
{
	printf("2. y = %d\n", y);
	y = 99;
	printf("3. y = %d\n", y);
}
