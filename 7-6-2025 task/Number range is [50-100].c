#include<stdio.h>
#include<conio.h>
void main()
{
    int num ;
    
    printf("enter number is range [50-100] : ");
    scanf("%d",&num);


    
    
    if(num>50 && num<100)
    {
        printf("this number is under range: ");
    }
    else
    {
        printf("this number is outoff range: ");
    }
    
    
    getch();
}
    

