// day10
// LearningIntFunction.c

#include <stdio.h>

int addTen(int a);

int main(void)
{
	int x, y;
	
	x = 50;
	printf("x = %d\n", x);
	
	y = addTen(x);
	printf("x+10 = %d", y);
	
	printf("\n\n");
	
	printf("5+10 = %d\n", addTen(5));
	printf("10+10 = %d\n", addTen(10));
	printf("15+10 = %d\n", addTen(15));
	printf("20+10 = %d\n", addTen(20));
	
	return 0;
}

int addTen(int a)
{
	int b;
	
	b = a+10;
	return b;
}
