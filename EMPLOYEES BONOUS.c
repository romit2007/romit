#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter your year: ");
    scanf("%d",&year);
    if(year>5)
    {
        printf("You get 50000/- bonus");
    }
    else if(year>3)
    {
        printf("You get 20000/- bonus");
    }
    else if(year>2)
    {
        printf("You get 10000/- bonus");
    }
    else
    {
        printf("You can't get bonus");
    }
    
    
    
    
    getch();
}
    
                    
