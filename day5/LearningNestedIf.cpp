// day5
// LearningNestedIf.c

#include <stdio.h>

int main(void)
{
	int age;
	
	printf("Please enter your age: ");
	scanf(" %d", &age);
	
	if(age>=0 && age<=120)
	{
		printf("Age is valid.\n");
		
		if(age<18)
		{
			printf("Underage.\n");
			
			if(age<5)
			{
				printf("Under school age.\n");
			}
		}
	}
	else
	{
		printf("Age is not valid.\n");
	}
	
	printf("Thank you");
	
	return 0;
}
