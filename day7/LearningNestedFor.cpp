// day7
// LearningNestedFor.c

#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("\t|\t1\t2\t3\t4\t5\n");
	printf("----------------------------------------------------\n");
	
	for(a=1 ; a<=5 ; a++)
	{
		printf("%d\t|", a);
		
		for(b=1 ; b<=5 ; b++)
		{
			printf("\t%d", a*b);
		}
		
		printf("\n");
	}
	
	return 0;
}




