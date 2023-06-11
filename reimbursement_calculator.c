/*
MILEAGE REIMBURSEMENT CALCULATOR:
Program that calculates mileage reimbursement for a salesperson at a rate of $.35 per mile.
Enter beginning odometer reading=> 13505.2
Enter ending odometer reading=> 13810.6
You traveled 305.4 miles. At $0.35 per mile, 
your reimbursement is $106.89.
*/

#include<stdio.h>
int main()
{
	double pmile=0.35;
	double reimbursement;
	float begining,ending;
	float dist;
	
	printf("Enter beginning odometer reading=>");
	scanf("%f",&begining);
	printf("\nEnter ending odometer reading=>");
	scanf("%f",&ending);
	
	dist=ending-begining;
	
	if(dist<0)
	{
		dist=-dist;
    }
	
    reimbursement=dist*pmile;
    
    printf("\nYou traveled %.2f miles,\nAt %.2f per mile,\nYour reimbursement is $%.2f"
		,dist,pmile,reimbursement);
}			
