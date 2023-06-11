//C program to find student's grade.

#include <stdio.h>

int grade(int num);

int main()
{
	int num;
	int letter;
	
	printf("Enter the grade of student=>");	
	scanf("%d",&num);
	
	letter = grade(num);
	
	return 0;	
}


int grade(int num)
{	
 	if(90 <= num && num <= 100)
	{
		printf("Letter of this grate is AA\n");
	}
	else if(80 <= num && num  <= 89)
	{
		printf("Letter of this grate is BA\n");
    }
	else if(75 <= num && num<= 79)
	{
		printf("Letter of this grate is BB\n");
	}
	else if(70 <= num && num<= 74)
	{
		printf("Letter of this grate is CB\n");
   	}
	else if(65 <= num && num<= 69)
	{
		printf("Letter of this grate is CC\n");
    }
	else if(60 <= num && num<= 64)
	{
		printf("Letter of this grate is DC\n");
    }
	else if(50 <= num && num<= 59)
	{
		printf("Letter of this grate is DD\n");
   	}
	else if(40 <= num && num<= 49)
	{
		printf("Letter of this grate is FD\n");
   	}
	else if( num <= 39)
	{
		printf("Letter of this grate is FF\n");
    }
    
    return num;
}


	

