// day8
// LearningScreenClear.c

#include <stdio.h>
#include <windows.h>		// To use delay
#include <stdlib.h>			// To use screen clear

int main(void)
{
	int i;
	
	for(i=10 ; i>=0 ; i--)
	{
		system("cls");		// To clear the screen
		printf("This program will be terminated in %d second(s)", i);
		Sleep(1000);		// Delay for 1 second
	}
	
	return 0;
}
