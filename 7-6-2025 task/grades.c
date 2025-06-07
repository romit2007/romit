#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter marks: ");
    scanf("%d",&marks);
    
    if(marks>=80)
    {
        printf("A grade");
    }
    else if(marks>=70)
    {
        printf("B grade");
    }
    else if (marks>=60)
    {
        printf("C grade");
    }
    else if(marks>=50)
    {
        printf("D grade");
    }
    else if(marks>=40)
    {
        printf("E grade");
    }
    else
    {
        printf("F grade");
    }
    
    getch();
}