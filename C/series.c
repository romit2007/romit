#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,first=1,second=2,next;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
    printf("Fibbonaci series");
    
    for(i=0;i<=num;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }
    
}