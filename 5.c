
#include <stdio.h>

int main()
{
    int arr[5];
    printf("enter the array elements:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("\narray elements are");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        
    }printf("\n");
    
    for( int i = 5-1 ; i>= 0; i--)
    {
        printf("%d",arr[i]);
    }
   
    
}
