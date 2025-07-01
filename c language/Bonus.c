#include<stdio.h>
#include<conio.h>
void main()
{
    int years;
    
    printf("Enter working years: ");
    scanf("%d",&years);
    
    if(years>=5)
    {
        printf("Bonus ammount 5000/-");
    }
    else if(years>=3)
    {
        printf("Bonus ammount 2500/-");
    }
    else
    {
        printf("Bonus ammount 1500/-");
    }
    
    
    getch();
}