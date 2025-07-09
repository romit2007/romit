#include <stdio.h>
#include <conio.h>
void main()
{
    int marks[5];
    int i,j;
    
    for(i=0;i<5;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("\n marks are %d",marks[i]);
    }

    getch();
}