// day12
// SortingNumberApplication.c

#include <stdio.h>
#include <windows.h>

int main(void)
{
	int v[5] = {3, 9, -1, 5, -9};
	int j, k, smallest, temp;
	
	printf("Given array v[5] = {3, 9, -1, 5, -9}\n\n");
	printf("This program will arrange the array in ascending order.\n");
	
	for(j=0 ; j<5 ; j++)
	{
		smallest = j;
		
		for(k=j+1 ; k<5 ; k++)
		{
			if(v[k] < v[smallest])
			{
				smallest = k;
			}
		}
		
		if(j==smallest)
		{
			printf("\n=============================================");
			printf("\nArrangement of numbers is no longer required.");
			printf("\n=============================================");
			Sleep(2000);
			break;
		}
		else
		{
			printf("\nSwitching the smallest number with v[%d]:\n", j);
			printf("v[%d] = %d with v[%d] = %d\n\n", j, v[j], smallest, v[smallest]);
			Sleep(2000);
			
			temp = v[j];
			v[j] = v[smallest];
			v[smallest] = temp;
			
			printf("After switching...\t");
			printf("v[%d] = %d\t\tv[%d] = %d\n", j, v[j], smallest, v[smallest]);
			Sleep(2000);
		}
	}
	
	printf("\n\nIn ascending order, v[5] = ");
	
	for(j=0 ; j<5 ; j++)
	{
		printf("%d\t", v[j]);
	}
	
	return 0;
}
