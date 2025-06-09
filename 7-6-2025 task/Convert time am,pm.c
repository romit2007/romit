#include<stdio.h>
#include<conio.h>
void main()
{
    int hour,min;
    
    printf("Enter time in 24-hour format (HH:MM): ");
    scanf("%d:%d",&hour,&min);


    
    
    if(hour<0||hour>23||min<0||min>59)
    {
        printf("Invalid timeimput");
    }
    else if(hour<12)
    {
        printf("period,am");
    }
    else if(hour>12)
    {
        printf("period,pm");
    }
    
    
    getch();
}
    

