// day12
// ArraysWithFunction.c

#include <stdio.h>
#include <math.h>

void func(double arr[], double val);

int main(void)
{
	double array[5] = {2, 4, 3, 5, 7};
	double power;
	
	printf("Enter power value: ");
	scanf(" %lf", &power);
	
	func(array, power);
	
	return 0;
}

void func(double arr[], double val)
{
	int i;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("%g to the power of %g: %.1f\n", arr[i], val, pow(arr[i], val));
	}
}
