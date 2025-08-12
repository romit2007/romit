#include<stdio.h>
#include<conio.h>
int main()
{
    int marks1,marks2;
    
    printf("Enter marks1: ");
    scanf("%d",&marks1);
    
    printf("Enter marks2: ");
    scanf("%d",&marks2);
    
    if(marks1>35 && marks2>35)
    {
        printf("Pass");
    }
    else
    {
        printf("fail");
    }
    
}