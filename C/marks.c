#include<stdio.h>
#include<conio.h>
void main()
{
    float marks;
    
    printf("Enter marks");
    scanf("%f",&marks);
    
    if(marks>=90)
    {
        printf("A");
    }
    else if(marks>=80)
    {
        printf("B");
    }
    else if(marks>=70)
    {
        printf("C");
    }
    else if(marks>=50)
    {
        printf("D");
    }
    else if(marks>=40)
    {
        printf("E");
    }
    else
    {
        printf("Fail");
    }
    
    
    getch();
}