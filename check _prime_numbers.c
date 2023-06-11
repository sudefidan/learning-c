/*
 An array for a maximum 20 numbers, the user will determine the total number to enter
from keyboard. Then, check the prime numbers in an array and screen them whether it’s
a prime number or not a prime number. 
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main ()
{
	int NArr[20];
	/*The user can enter max 20 numbers */
	int i,a,count = 0;
	
	for(i = 0; i < 20; i++)
	{
		
	count = 0;
		
	printf("Please enter number:");
	scanf("%d", &NArr[i]);
	
		for(a = 2; a < NArr[i]; a++)
   		{
       		if(NArr[i]%a == 0)
      		 {
           		count++;
       		}    
   		 }  
    
    	if(count == 0)
   		 {
       		 printf("This number is prime\n");                    
    	}
    	
   		 else
   		 {
        	printf("This number is not prime\n"); 
   		 }
	}
		
		
	

return 0;
		
	
}
