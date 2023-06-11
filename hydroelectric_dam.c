/*
Program to assist in the design of a hydroelectric dam. 
Prompt the user for the height of the dam and for the number of cubic meters of water that are projected to flow from the top to the bottom of the dam each second.
Predict how many megawatts (1MW = 106 W) of power will be produced if 90% of the work done on the water by gravity is converted to electrical energy.
Note that the mass of one cubic meter of water is 1000 kg. Use 9.80 meters/second2 as the gravitational constant g.
Be sure to use meaningful names for both the gravitational constant and the 90% efficiency constant. For one run, use a height of 170 m and flow of 1.30x10 3m 3/s. 
The relevant formula ( w = work, m = mass, g = gravity, h = height) is: w = mgh.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	float W,h,mW,cubm,kg,a,g;
	
	printf("\n Enter the height of teh dam(meter)=");
	scanf("%f",&h);
	printf("\n Enter the cubic meter of water to flow = ");
	scanf("%f",&cubm);
	
	kg=cubm*1000;
	g=9.80;
	a=0.9;
	W=kg*g*h*a;
	mW=W/100000;
	
	printf("\n The totaly energy to be obtained %1f",mW);
	
	}
