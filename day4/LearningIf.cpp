// day4
// LearningIf.c

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive integer: ");
	scanf(" %d", &x);
	
	if(x<0)
	{
		printf("ERROR! A negative number has been entered.\n");
	}
	
	printf("Number entered: %d", x);
	
	return 0;
}
