#include<stdio.h>
#include<conio.h>
void main()
{
    int num,reversed_num=0,remainder;
    
    
    printf("Enter an integer: ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        remainder=num%10;
        reversed_num=reversed_num*10+remainder;
        num/=10;
    }
    
    
    
    printf("Reversed num = %d\n",reversed_num);
    
    
    
    getch();
}