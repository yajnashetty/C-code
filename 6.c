
#include <stdio.h>

int main()
{
    int arr[5];
    int sum= 0;
    printf("enter the array elements:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("\narray elements are");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        sum+= arr[i];
        
    }printf("sum = %d", sum);
    
   
    
}
