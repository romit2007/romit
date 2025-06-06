#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    
    if(num1>num2)
    {
        printf("Num 1 is bigger");
    }
    else if(num2>num1)
    {
        printf("Num 2 is bigger");
    }
    else
    {
        printf("Both numbers equal");
    }
    
    
    getch();
}