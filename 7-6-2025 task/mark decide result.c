#include<stdio.h>
#include<conio.h>
void main()
{
    int mark;
    
    printf("Enter mark: ");
    scanf("%d",&mark);
    
    if(mark>=40)
    {
        printf("pass");
    }
    else
    {
        printf("Fail");
    }
    
    getch();
}