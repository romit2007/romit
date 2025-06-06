#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter age:");
    scanf("%d",&age);
    
    if(age>18)
    {
        printf("Eligibale to vote");
    
    
        if(age>70)
         {
             printf("\n senior citizen");
         }
     
        else
        {
            printf("\n youngsters");
        }
    }


    else
    {
            printf("Not Eligibale to Vote");
    }




      getch();
    }