#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem=0,sum=0;
    
    printf("Enter any number: ");
    scanf("%d",&num);
    
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    
    
    
    printf("sum of all digits: %d",num);
    
    getch();
}