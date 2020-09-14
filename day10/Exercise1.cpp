// day10
// Exercise1.c

/* 	Prompt a message for the user:
	"How many times do you want your name to be printed?"
	Store the value inside variable 'a' (integer)
	
	Create a function called 'yourName' which prints out
	your name by 'a' times.
*/

#include <stdio.h>

void yourName(int a);

int main(void)
{
	int a;
	
	printf("How many times do you want your name to be printed?\n");
	scanf(" %d", &a);
	
	yourName(a);
	
	return 0;
}

void yourName(int a)
{
	int j;
	
	for(j=1 ; j<=a ; j++)
	{
		printf("Mohammad\t");
	}
}
