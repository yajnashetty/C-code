// c program to insert an array at given point
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100], n ,ele, pos;
    int i;
    printf("\nenter the size of an array:");
    scanf("%d",&n);
    printf("\nenter the array elements:");
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array elements are :");
    for (int i = 0 ; i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\nenter the elememt to be inserted :");
    scanf("%d",&ele);
    printf("\nenter the pos the ele to be inserted : ");
    scanf("%d",&pos);
    if (pos > n + 1 || pos <= 0)
    {
        printf("\narray out of bound");
        exit(0);
    }
    for(int i = n; i>=pos; i--)
    {
       a[i] = a[i-1] ;
    }
    n++;
    
    a[pos-1] = ele;
    printf("\n th array after insertion: ");
    for (int i = 0 ; i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\nthe element %d inserted and position %d",ele,pos);
    return 0 ;
}