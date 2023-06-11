/*
Program that finds A∩B∩C and A∩B\C .
A={1,2,3,4}
B={2,4,11,12}
C={2,4,10,14}
*/


#include<stdio.h>

int main()
{
	int a1 = 1,a2 = 2, a3 = 3, a4 = 4;
	int b1 = 2,b2 = 4, b3 = 11, b4 = 12;
	int c1 = 2,c2 = 4,c3 = 10, c4 = 14;
	int com1 = 0,com2 = 0,com3 = 0, com4 = 0;
	int mutl1 = 0,mutl2 = 0, mutl3 = 0 ,mutl4 = 0;
	
	if(a1 == b1) 
		{
			if(a1 == c1)com1 = c1;else if(a1 == c2)com1 = c2;else if(a1 == c3)com1 = c3;
				else if(a1 == c4)com1 = c4; 
		}
	else if(a1 == b2)
		{
			if(a1 == c1)com1 = c1;else if(a1 == c2)com1 = c2;else if(a1 == c3)com1 = c3;
				else if(a1 == c4)com1 = c4; 
		}
	else if(a1 == b3)
		{
			if(a1 == c1)com1 = c1;else if(a1 == c2)com1 = c2;else if(a1 == c3)com1 = c3;
				else if(a1 == c4)com1 = c4; 
		}
	else if(a1 == b4)
		{
			if(a1 == c1)com1 = c1;else if(a1 == c2)com1 = c2;else if(a1 == c3)com1 = c3;
				else if(a1 == c4)com1 = c4; 
		}
		
	
		
	if(a2 == b1) 
		{
			if(a2 == c1)com2 = c1;else if(a2 == c2)com2 = c2;else if(a2 == c3)com2 = c3;
				else if(a2 == c4)com2 = c4; 
		}
	else if(a2 == b2)
		{
			if(a2 == c1)com2 = c1;else if(a2 == c2)com2 = c2;else if(a2 == c3)com2 = c3;
				else if(a2 == c4)com2 = c4; 
		}
	else if(a2 == b3)
		{
			if(a2 == c1)com2 = c1;else if(a2 == c2)com2 = c2;else if(a2 == c3)com2 = c3;
				else if(a2 == c4)com2 = c4; 
		}
	else if(a2 == b4)
		{
			if(a2 == c1)com2 = c1;else if(a2 == c2)com2 = c2;else if(a2 == c3)com2 = c3;
				else if(a2 == c4)com2 = c4; 
		}
	
	
	
	if(a3 == b1) 
		{
			if(a3 == c1)com3 = c1;else if(a3 == c2)com3 = c2;else if(a3 == c3)com3 = c3;
				else if(a3 == c4)com3 = c4; 
		}
	else if(a3 == b2)
		{
			if(a3 == c1)com3 = c1;else if(a3 == c2)com3 = c2;else if(a3 == c3)com3 = c3;
				else if(a3 == c4)com3 = c4;  
		}
	else if(a3 == b3)
		{
			if(a3 == c1)com3 = c1;else if(a3 == c2)com3 = c2;else if(a3 == c3)com3 = c3;
				else if(a3 == c4)com3 = c4; 
		}
	else if(a3 == b4)
		{
			if(a3 == c1)com3 = c1;else if(a3 == c2)com3 = c2;else if(a3 == c3)com3 = c3;
				else if(a3 == c4)com3 = c4;  
		}
	
	
	
	
	if(a4 == b1) 
		{
			if(a4 == c1)com4 = c1;else if(a4 == c2)com4 = c2;else if(a4 == c3)com4 = c3;
				else if(a4 == c4)com4 = c4; 
		}
	else if(a4 == b2)
		{
			if(a4 == c1)com4 = c1;else if(a4 == c2)com4 = c2;else if(a4 == c3)com4 = c3;
				else if(a4 == c4)com4 = c4;   
		}
	else if(a4 == b3)
		{
			if(a4 == c1)com4 = c1;else if(a4 == c2)com4 = c2;else if(a4 == c3)com4 = c3;
				else if(a4 == c4)com4 = c4;  
		}
	else if(a4 == b4)
		{
			if(a4 == c1)com4 = c1;else if(a4 == c2)com4 = c2;else if(a4 == c3)com4 = c3;
				else if(a4 == c4)com4 = c4;  
		}
	
	
	if(a4 == b4) 
		{
			if(a4 == c1)com4 = c1;else if(a4 == c2)com4 = c2;else if(a4 == c3)com4 = c3;
				else if(a4 == c4)com4 = c4; 
		}
	
	
	printf( "AnBnC => %d %d %d %d\n ", com1,com2,com3,com4);
	if(com1 == c1)mutl1 = com1 - c1;else if(com1 == c2)mutl1 = com1 - c2;
		else if(com1 == c3)mutl1 = com1 - c3;else if(com1 == c3)mutl1 = com1 - c4;
	if(com2 == c1)mutl2 = com2 - c1;else if(com2 == c2)mutl2 = com2 - c2;
		else if(com2 == c3)mutl2 = com2 - c3;else if(com2 == c3)mutl2 = com2 - c4;
	if(com3 == c1)mutl3 = com3 - c1;else if(com3 == c2)mutl3 = com3 - c2;
		else if(com3 == c3)mutl3 = com3 - c3;else if(com3 == c3)mutl3 = com3 - c4;	
	if(com4 == c1)mutl4 = com4 - c1;else if(com4 == c2)mutl4 = com4 - c2;
		else if(com4 == c3)mutl4 = com4 - c3;else if(com4 == c3)mutl4 = com4 - c4;	
		
		
	printf( "AnB\\C => %d %d %d %d\n ",mutl1,mutl2,mutl3,mutl4);
	
	
return 0;
	
	
}
 	
