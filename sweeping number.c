#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3 ;
    
    printf("Enter three integers: ");
    scanf ("%d:%d:%d",&num1,&num2,&num3);
    
    printf("Before sweeping: num1=%d,num2=%d,num3=%d \n ",num1,num2,num3);
    
    num1=num2;
    num2=num3;
    num3=num1;
    
    printf("After sweeping: num1=%d,num2=%d,num3=%d \n ",num1,num2,num3);
    
    
    getch();
}
    

