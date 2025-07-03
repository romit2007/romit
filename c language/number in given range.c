#include<stdio.h>
#include<conio.h>
void main ()
{
    int num;
    
    printf("Enter num: ");
    scanf("%d",&num);
    
    if(num>=10 && num<=50)
    {
        printf("Range");
    }
    else
    {
        printf("Out of range");
    }
    
    
   getch();
}

    
     
    