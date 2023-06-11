/*
Program that calculates and prints the results of:
a+c, t+c, y+t,  a+t, s+b, w+b, s+c, w+c, w+pp.
Take: a=200, b=12345, w=1234567890, s = 4043, t = 2.13459, y = 1.1415927,pp=2541567890
Output should be:
a + c = 275
t + c = 77.134590
y + t = 3.276183
a + t = 202.134583
s + b = 16388
w + b = 1234580235
s + c = 4118
w + c = 1234567965
w + pp =3776135780
*/

#include <stdio.h>
#include<stdlib.h>

int main() 
{    
     int a=200; 
	int b=12345; 
	int w=1234567890;
	int s = 4043;
	unsigned int K;
    int pp=2541567890;
	double t = 2.13459; 
	double y = 1.1415927; 
	
	printf("Just enter one character to show calculation");
	scanf("%d");
    
         K=275-a;
	 
	int firstresult=a+K;
	double secondresult=t+K;
	double thirdresult=y+t;
	double fourthresult=a+t;
	int fifthresult=s+b;
	int sixthresult=w+b;
	int seventhresult=s+K; 
	int eighthresult=w+K;
	float ninthresult=w+pp;
	
	printf("a+K=%d\n", firstresult);
	printf("t+K=%f\n", secondresult);
	printf("y+K=%f\n", thirdresult);
	printf("a+K=%f\n", fourthresult);
	printf("s+K=%d\n", fifthresult);
	printf("w+b=%d\n", sixthresult);
	printf("s+K=%d\n", seventhresult);
	printf("w+K=%d\n", eighthresult);
	printf("w+pp=%.0f\n", ninthresult);

return 0; 

}


