#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5;
    int b=3;
    int temp;
    
    printf("\n before sweeping is: %d",a);
    printf("\n before sweeping is: %d",b);
    
    temp=a;
    a=b;
    b=temp;

    printf("\n after sweeping is: %d",a);
    printf("\n after sweeping is: %d",b);
    
}