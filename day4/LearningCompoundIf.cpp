// day4
// LearningCompoundIf.c

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive integer: ");
	scanf(" %d", &x);
	
	if(x<0)
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...\n");
		x = -x;
	}
	
	printf("Number entered: %d", x);
	
	return 0;
}
