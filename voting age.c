#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter age: ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("Eligible for vote");
    }
    else
    {
        printf("Not Eligible for vote");
    }
    
    getch();
}

