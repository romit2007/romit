#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    
    printf("Before swepping:\n");
    printf("First number = %d\n",num1);
    printf("Second number = %d\n",num2);
    
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    

    
    printf("after swepping:\n");
    printf("First number = %d\n",num1);
    printf("Second number = %d\n",num2);
    
    
    getch();
}
    
    