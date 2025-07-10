#include<stdio.h>
#include<conio.h>
void main()
{
    int num1;
    int num2;
    int add,multi,division,sub;
    
    printf("Enter num1: ");
    scanf("%d",&num1);
    
    printf("Enter num2: ");
    scanf("%d",&num2);
    
    {
        add=num1+num2;
        printf("\n %d + %d = %d",num1,num2,add);
        
        
        sub=num1-num2;
        printf("\n %d - %d = %d",num1,num2,sub);
        
        
        multi=num1*num2;
        printf("\n %d * %d = %d",num1,num2,multi);
        
        division=num1/num2;
        printf("\n %d / %d = %d",num1,num2,division);
        
        
    }
    
    getch();
}