//Make an empty array of 5-by-5 elements, enter the elements into array from keyboard,and print upper and lower triangle of matrix. 
#include <stdio.h>

int main()
{
	int arr[5][5],i,j;
	
	printf("Enter the elements for matrix =>");
	for(i = 0; i < 5; ++i)
	{
		for(j = 0; j < 5;++j)
		{
			printf("\n Element - [%d],[%d] : ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\n Your matrix is:");
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("\n");
		for(j = 0; j < 5; j++)
		{
			printf("%3d", arr[i][j]);
		}
	}
	
	printf("\n");
	printf("\n The upper triangle of this matrix :");
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("\n");
		for(j = 0; j < 5; j++)
		{
			if(i <= j)
			{
				printf("%3d", arr[i][j]);
			}
			else
			{
				printf("%3d",0);
			}	
		}	
	}
	
	printf("\n");
	printf("\n The lower triangle of this matrix :");
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("\n");
		for(j = 0; j < 5; j++)
		{
			if(i >= j)
			{
				printf("%3d", arr[i][j]);	
			}
			else
			{
				printf("%3d",0);
			}
			
		}
	}
	
	getch();
	
	return 0;
	
}
