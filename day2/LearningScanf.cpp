// LearningScanf.c

#include <stdio.h>

int main(void)
{
	int age;
	
	printf("Hi Mohammad!\n");
	printf("How old are you?\n");
	scanf(" %d", &age);
	printf("You are %d years old", age);
	
	return 0;
}
