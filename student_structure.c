/*
Code a student structure which has character, integer, and float elements called name, 
number and marks. Two functions to record and print students name, number and mark.
*/
#include <stdio.h>
#include <stdlib.h>

// create a struct named as records
typedef struct {
	char name[20];
	char surname[20];
	/* if the number is too large, it should be specified as 
	'signed long int' ('long' for short) and the form qualifier changed to '% ld'.*/
	int no;
	float mark[20];
}records;

void scanrecords(records*);
void printrecords(records*);

int main()
{
	//create one struct variable as pointer named student and reserve space from memory.
	records *student = (records *)malloc(sizeof(records));
	//call the function to scan.	
	scanrecords(student);
	printf("-------------------------------------------------\n");
	//call the function to print.
	printrecords(student);
	
	//return used space to memory.
	free(student);
	return 0;
}

void scanrecords(records*arg)
{
	int numMark,i;
	printf("Enter the name of student = ");
	scanf("%s",&(arg->name));
	printf("Enter the surname of student = ");
	scanf("%s",&(arg->surname));
	printf("Enter the school number of student = ");
	scanf("%d", &(arg->no));
	//scan as many numbers as the user wants.
	printf("How many marks do you want to enter = ");
	scanf("%d", &numMark);
	for(i = 0; i < numMark;i++)
	{
		printf("            Enter the %d.mark of student = ",i+1);
		scanf("%f", &(arg->mark[i]));
	}

}

void printrecords(records *arg)
{
	int numMark,i;
	printf("The name of student is %s. \n", arg->name);
	printf("The surname of student is %s. \n", arg->surname);
	printf("The school number of student = %d \n", arg->no);
	//print as many numbers as the user wants.
	printf("How many marks you have entered do you want to print => ");
	scanf("%d", &numMark);
	for(i = 0; i < numMark;i++)
	{
			printf("            The %d.mark of student = %.2f \n",i +1,arg->mark[i]);
	}
}
