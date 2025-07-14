#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,first=0,second=1,next;
    
    printf("enter num");
    scanf("%d",&num);
    
    
    
    for(i=0;i<num;i++)
    {
        printf("%d",first);
        
        next=first+second;
        first=second;
        second=next;
    }
    
    
    getch();
}

