//Program to calculate the value of sin(x) using expansion.  Limit will be determined by user to expand the series.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, i, f, fact;
	float result = 0, x;
	 
	printf("Enter the value of sin x\n");
	scanf("%f", &x);
	
	x = x * 3.14/180;
	
	printf("Enter the accuracy\n");
	scanf("%d", &n);
	
	
	for(i = 0; i <= n; i++)
	{
		fact = 1;
		for(f = 2 ; f <= 2 * i + 1; f++)
		{
			fact *= f;
		}
		
		result += pow(-1,i) * pow(x , 2 * i + 1) / fact;
	
	}
	
	printf("The result = %d\n",result );
	
	return 0;
}

	
	
	
	
	
	
	
	
