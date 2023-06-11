//Program that finds the years divisible to 4 between the years of 2010 and 2100.

#include<stdio.h>

int main()
{
	int year;
	
	printf("ENTER THE YEAR =>");
	scanf("%d", &year);
	
	if(year % 4 == 0 && year >= 2010 && year <= 2100)
		{
			printf("This year divisibles to 4");
		}
	else if (year >= 2010 && year <= 2100)
	
		{
			printf("This year does not divisible to 4");
		}
	

return 0;;
		

	
}
