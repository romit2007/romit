#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter num: ");
    scanf("%d",&num);
    
    if(num%3==0 && num%5==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    getch();
}
    
     
    