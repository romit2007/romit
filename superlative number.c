#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    
    printf("Enter num1: ");
    scanf("%d",&num1);
    
    printf("Enter num2: ");
    scanf("%d",&num2);
    
    printf("Enter num3: ");
    scanf("%d",&num3);
    
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 is big");
        }
        else
        {
            printf("num3 is big");
        }
    }
    else
    {
        printf("num3 is big");
    }
    
    
    
    
    
    
    
    

    
    getch();
}

