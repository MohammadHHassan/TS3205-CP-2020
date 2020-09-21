// day12
// LearningStrings.c

#include <stdio.h>

int main(void)
{
	char name[100];
	
	printf("Please enter your name: ");
	scanf(" %[^\n]s", &name);
	
	printf("Your name is %s", name);
	
	return 0;
}
