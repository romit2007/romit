#include<stdio.h>
#include<conio.h>
void main()
{
    int usernum;
    int luckynum=5;
    
    printf("Enter number around 1 to 10");
    scanf("%d",&usernum);
    
    if(luckynum == usernum)
    {
        printf("correct");
    }
    else
    {
        printf("false");
    }
    
    
    getch();
}