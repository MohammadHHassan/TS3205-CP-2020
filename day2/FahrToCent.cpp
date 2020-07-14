// FahrToCent.c

#include <stdio.h>

int main(void)
{
	double fahr, cent;
	
	fahr = 100.0;
	cent = (fahr - 32.0)*5.0/9.0;
	
	printf("Converting Fahr to Cent:\n");
	printf("%.1f F = %.1f C", fahr, cent);
	
	return 0;
}
