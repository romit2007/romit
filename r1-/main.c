#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
   
    
    printf("enter 5 numbers to check number is even or odd");
    for(int i=1;i<=5;i++){
        scanf("%d",&num);
    if(num%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    }
    
    
    getch();
}