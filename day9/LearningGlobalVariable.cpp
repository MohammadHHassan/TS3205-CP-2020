// day9
// LearningGlobalVariable.c

#include <stdio.h>

void printSomething();
double money = 1.00;			// Global variable

int main(void)
{	
	printf("I have $%.2f in my pocket.\n", money);
	
	return 0;
}

void printSomething()
{
	printf("I have $%.2f in my pocket.\n", money);
}
