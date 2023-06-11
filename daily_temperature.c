/*
Program to process a collection of daily high temperatures. It will take 24 temperature values for one day.
These values will be taken from user and will be in centigrade. Your program should count and print the number of hot days (high temperature 85 or higher), 
the number of pleasant days (high temperature 60–84), and the number of cold days (high temperatures less than 60).
It should also display the category of each temperature and calculate the average temperature of the day and print it on the screen.
*/
#include <stdio.h>

int main ()
{
    int N=24;
	int tempArray[N]; 
	int count = 0, sum = 0;
    double avtemp;
    
    printf("Enter the 24 temperatures  => ");  
    
    for(count = 0; count < N ; count++)
     {
    	scanf("%d",&tempArray[count]);
    	sum += tempArray[count];	
	 }	 
	avtemp=sum/N;	
	printf("The avarage temperature today: %.2f\n", avtemp);
		
	for(count=0; count < N ; count++)
    {
    	int temp = tempArray[count];	
    	if(temp >= 85)
		{
			printf("%d fahrenheit temperature is hot!\n",temp);
		}
		else if(85 > temp && temp >= 60)
		{
			printf("%d fahrenheit temperature is plesant!\n",temp);
		}
		else if( temp < 60)
		{
			printf("%d fahrenheit temperature is cold!\n",temp);
		}
	}
}
		
