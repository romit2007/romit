#include<stdio.h>
#include<conio.h>
void main()
{
    int mark;
    
    printf("Enter mark: ");
    scanf("%d",&mark);
    
    if(mark>=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
    getch();
}