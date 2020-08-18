// day8
// BisectionMethod.c

#include <stdio.h>
#include <math.h>

int main(void)
{
	double xmin, xmid, xmax, fmin, fmid, fmax, p;
	int count=0;
	
	printf("This program finds the root of pow(x,3)+(2*x)-4=0 using Bisection Method.\n\n");
	
	printf("Please enter the value of xmin: ");
	scanf(" %lf", &xmin);
	
	printf("Please enter the value of xmax: ");
	scanf(" %lf", &xmax);
	
	do
	{
		count++;		// Count the number of iteration of bisection
		
		xmid = 0.5*(xmin+xmax);		// Calculate the mid point
		
		fmin = pow(xmin,3)+(2*xmin)-4;		// Calculate f(xmin)
		fmid = pow(xmid,3)+(2*xmid)-4;		// Calculate f(xmid)
		fmax = pow(xmax,3)+(2*xmax)-4;		// Calculate f(xmax)
		
		p = fmin*fmid;
		
		if(p<0)
		{
			xmax = xmid;
		}
		else if(p>0)
		{
			xmin = xmid;
		}
		else
		{
			break;
		}
		
	}while((xmax-xmin)>0.00001);
	
	printf("\nRoot = %.2f", xmid);
	printf("\nNumber of iteration = %d", count);
	
	return 0;
}
