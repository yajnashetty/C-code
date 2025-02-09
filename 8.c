/*.You are developing a user registration system for a website. The username entered by the user must follow these rules:

It should contain only alphanumeric characters (a-z, A-Z, 0-9).
It should start with a letter (not a number or special character).
It should be at least 5 characters long and at most 15 characters long.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int validate(char *name)
{
    int len, i ;
    len = strlen(name);
    
    if (len<5||len>15)
    
    {
        return 0 ;
        
    }
  
    else if(!isalpha(name[0]))
        return 0;
    for (i = 0 ; i< len; i++)
    {
        if (!isalnum(name[i]))
        return 0;
    }
    
  return 1;  
}
void main()
{
    
    int flag;
    char name[100];
    printf("enter the user name ");
    scanf("%s",name);
   
    if (!validate(name))
    {
        printf("invalid user name");
        exit(0);
    }
    
    printf("user name : %s",name);
    
    
    
    
    
}
