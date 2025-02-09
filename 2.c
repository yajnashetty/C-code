
#include <stdio.h>

int main()
{
    int arr[5];
    int max, smax;
    printf("enter the array elements:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("\narray elements are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
        
    }
    max = arr[0];
    for (int i = 0 ; i<5;i++)
    { 
        if(max < arr[i])
        {
            max = arr[i];
        }
    }  

    for (int i = 0 ; i<5;i++)
    { 
        if(arr[i]!=max  && smax < arr[i])
        {
            smax = arr[i];
        }
    } 
    printf( "\n2nd max is %d",smax);
}
