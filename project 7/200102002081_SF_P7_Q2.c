#include <stdio.h> 
  
void swap(int *xt, int *yt);

int main() 
{ 
    int x, y; 
    
    printf("Enter Value of x = "); 
    scanf("%d", &x); 
    
    printf("Enter Value of y = "); 
    scanf("%d", &y); 
    
    printf("Before Swapping value of x is %d and value of y is %d\n", x, y);
    
    swap(&x, &y); 
    
    printf("After Swapping: x = %d, y = %d", x, y); 
    
    return 0; 
} 

void swap(int *xt, int *yt) 
{ 
    int temp = *xt; 
    *xt = *yt; 
    *yt = temp; 
} 
  
