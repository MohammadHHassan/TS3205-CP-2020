// day9
// LearningFunctionsParameter.c

#include <stdio.h>

double moneyConverter(double money);

int main(void)
{
	double duit, input;
	
	printf("Welcome to money converter.\n");
	printf("Today's rate:\n");
	printf("BND 1.00 = RM 3.04\n");
	printf("\nPlease enter your money: ");
	scanf(" %lf", &input);
	
	duit = moneyConverter(input);
	
	printf("\nYour BND %.2f has been converted to RM %.2f", input, duit);
	
	printf("\nBND 200 = RM %.2f\n", moneyConverter(200));
	printf("\nBND 300 = RM %.2f\n", moneyConverter(300));
	printf("\nBND 400 = RM %.2f\n", moneyConverter(400));
	
	return 0;
}

double moneyConverter(double money)
{
	return money*3.04;
}
