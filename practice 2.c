#include<stdio.h>
#include<conio.h>
void main()
{
    int usernum;
    int luckynum=5;
    
    printf("Enter number around 1 to 10");
    scanf("%d",&usernum);
    
    printf("\n lucky number is %d",luckynum);//5
    luckynum = usernum;
    printf("\n lucky number is %d",luckynum);
    
    
    getch();
}