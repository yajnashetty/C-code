
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
    for( int i = 0 ; i< 4; i++)
    {
        for (int j = i+1 ; j < 5; j++ )
        {
            if (arr[i] == arr[j])
            {
            arr[i] = -1;
            arr[j] = -1;
            }
            
        }
    }printf("unique elements are ");
    
    for (int i = 0 ; i < 5 ; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d", arr[i]);
        }
    }
}
