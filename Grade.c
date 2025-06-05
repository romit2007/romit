#include<stdio.h>
#include<conio.h>
void main()
{
    int mark;
    
    printf("Enter your mark: ");
    scanf("%d",&mark);
    
    if(mark>70)
    {
        printf("A");
    }
    else if(mark>60)
    {
        printf("B");
    }
    else if(mark>50)
    {
        printf("C");
    }
    else
    {
        printf("Fail");
    }
    
    
    
    
    getch();
}