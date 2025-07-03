#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    
    printf("Enter first number: ");
    scanf("%d",&num1);
    
    printf("Enter second number: ");
    scanf("%d",&num2);
    
    if(num1>=num2)
    {
        printf("first number is big ");
    }
    else if(num2>=num1)
    {
        printf("second number is big");
    }
    else
    {
        printf("Number are equal");
    }
    
    
    getch();
}
    
     
    