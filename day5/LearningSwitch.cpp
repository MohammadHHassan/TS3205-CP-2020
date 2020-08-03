// day5
// LearningSwitch.c

#include <stdio.h>

int main(void)
{
	char input;
	
	printf("Please enter 'A' or 'B': ");
	scanf(" %c", &input);
	
	switch(input)
	{
		case 'A':	printf("You typed 'A'.\n");
					break;
		
		case 'a':	printf("You typed 'a'.\n");
					break;
					
		case 'B':	
		case 'b':	printf("You typed 'B' or 'b'.\n");
					break;
		
		default:	printf("You didn't type 'A' or 'B'.\n");
	}
	
	printf("Thank you!");
	
	return 0;
}
