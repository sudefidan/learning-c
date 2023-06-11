/*
Create an array with 15 elements and enter the values from keyboard. Find the largest
and smallest elements of array and find the number of odd and even numbers in array
and print them all on screen. 
*/
#include <stdio.h>
#define MAX_SIZE 100   // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in this array: ");
    for(i = 0; i < size; i++)
    { 
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\n Maximum element is %d\n", max);
    printf("\n Minimum element is %d\n", min);
     
    printf("\n Even numbers in the array are => ");
        for (i = 0; i < size ; i++) 
        {
            if (arr[i] % 2 == 0) 
            {
                printf("%d \t", arr[i]);
            }
        }
 
        printf("\n Odd numbers in the array => ");
        for (i = 0; i < size; i++) 
        {
            if (arr[i] % 2 != 0) 
            {
                printf("%d \t", arr[i]);
            }
        }
    
    getch();
    return 0;
}
