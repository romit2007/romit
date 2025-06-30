#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter age: ");
    scanf("%d",&age);
    
    if(age>18)
    {
        printf("\n Eligible to vote");
        
        if(age>60)
        {
            printf("\n Senior Citizen");
        }
        else
        {
            printf("\n Young");
        }

    }
    else
    {
        printf("\n Not Eligible to vote");
    }
    
    
    
    getch();
}