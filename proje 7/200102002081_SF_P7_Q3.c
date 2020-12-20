#include <stdio.h>

int addition(int num1,int num2, int num3,int num4);
int squareaddition(int num1, int num2, int num3, int num4);
int cubeaddition(int num1,int num2, int num3,int num4);
int fourthaddition(int num1,int num2, int num3,int num4);
int findmax(int sum, int squaresum, int cubesum, int fourthsum);

int main()
{
	int sum, squaresum, cubesum, fourthsum;
	int num1, num2, num3, num4;
	int result1, result2, result3, result4;
	
	printf("Enter the first number=");	
	scanf("%d",&num1);
	
	printf("Enter the second number=");	
	scanf("%d",&num2);
	
	printf("Enter the third number=");	
	scanf("%d",&num3);
	
	printf("Enter the fourth number=");	
	scanf("%d",&num4);
	
	sum = addition(num1, num2, num3, num4);
	squaresum = squareaddition(num1, num2, num3, num4);
	cubesum = cubeaddition(num1, num2, num3, num4);
	fourthsum = fourthaddition(num1, num2, num3, num4);
	findmax(sum,  squaresum, cubesum, fourthsum);
	
	return 0;
}

int addition(int num1,int num2, int num3,int num4)
{
	int sum;
	
	sum = num1 + num2 + num3 + num4;
	
	printf("\nThe sum of this four number is %d\n",sum);
	
	return sum;
	
}

int squareaddition(int num1,int num2, int num3,int num4)
{
	int square1, square2, square3, square4, squaresum;
	
	square1 = num1*num1;
	square2 = num2*num2;
	square3 = num3*num3;
	square4 = num4*num4;
	squaresum = square1 + square2 + square3 + square4;
	
	printf("The sum of this four numbers\'s square is %d\n",squaresum);
	
	return squaresum;
	
}

int cubeaddition(int num1,int num2, int num3,int num4)
{
	int cube1, cube2, cube3, cube4, cubesum;
	
	cube1 = num1*num1*num1;
	cube2 = num2*num2*num2;
	cube3 = num3*num3*num3;
	cube4 = num4*num4*num4;
	cubesum = cube1 + cube2 + cube3 + cube4;
	
	printf("The sum of this four numbers\'s cube is %d\n",cubesum);
	
	return cubesum;
	
}

int fourthaddition(int num1,int num2, int num3,int num4)
{
	int ft1, ft2, ft3, ft4, fourthsum;
	
	ft1 = num1*num1*num1*num1;
	ft2 = num2*num2*num2*num2;
	ft3 = num3*num3*num3*num3;
	ft4 = num4*num4*num4*num4;
	fourthsum = ft1 + ft2 + ft3 + ft4;
	
	printf("The sum of this four numbers\'s fourth power is %d\n",fourthsum);
	
	return fourthsum;
	
}

int findmax(int sum, int squaresum, int cubesum, int fourthsum)
{
	int max;
	
	sum =  max;
	
	if(squaresum > max)
		max = squaresum;
	if(cubesum > max)
		max = cubesum;
	if(fourthsum > max)
		max = fourthsum;
	
	printf("The biggest result of the summation is %d\n",max);	
	
	return max;
}


