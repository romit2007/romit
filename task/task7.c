#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[7];
    int i,j,avg,sum;
    
    for(i=0;i<7;i++)
    {
        printf("\n Enter marks");
         scanf("%d",&marks[i]);
    }
    
    for(i=0;i<7;i++)
    {
        sum+=marks[i];
    }
    avg=sum/7;
    printf("\n perchantage are %d",avg);
    
    getch();
}