#include<stdio.h>
#include<conio.h>
void main()
{
    int num,ans=0,i;
    
    
    printf("Enter any number");
    scanf("%d",&num);
    
    
    printf("Table of given num is :  ");
    for(i=1;i<=10;i++)
    {
        ans=num*i;
        printf("\n %d * %d = %d",num,i,ans);
    }
    
    
    
    getch();
}
