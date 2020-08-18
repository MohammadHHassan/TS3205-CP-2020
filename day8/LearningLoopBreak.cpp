// day8
// LearningLoopBreak.c

#include <stdio.h>			// printf/scanf library
#include <stdlib.h>			// Screen clear library

int main(void)
{
	char input;
	
	while(true)				// Forever loop
	{
		printf("Menu:\n");
		printf("1. Press 'e' to exit.\n");
		printf("2. Press any other key to loop.\n");
		
		printf("Your input: ");
		scanf(" %c", &input);
		
		if(input == 'e')
		{
			printf("Exiting...\n");
			break;
		}
		
		system("cls");		// Clear the screen
	}
	
	printf("Thank you!");
	
	return 0;
}






