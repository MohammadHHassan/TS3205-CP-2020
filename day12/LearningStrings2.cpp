// day12
// LearningStrings2.c

#include <stdio.h>

int main(void)
{
	char greet[20] = {'H', 'e', 'l', 'l', 'o'};
	char query[30] = {"What is your name?"};
	char name[100];
	char farewell[] = "Goodbye";
	
	printf("%s\n", greet);
	printf("%s\n", query);
	scanf(" %[^\n]s", &name);
	printf("Your first initial is %c", name[0]);
	printf("\n%s %s!!!", farewell, name);
	
	return 0;
}
