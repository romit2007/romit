#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter marks: ");
    scanf("%d",&marks);
    
    if(marks>90)
    {
        printf("A");
    }
    else if(marks>80)
    {
        printf("B");
    }
    else if(marks>70)
    {
        printf("c");
    }
    else if(marks>40)
    {
        printf("d");
    }
    else
    {
        printf("Fail");
    }
    
    
    
    
    getch();
}