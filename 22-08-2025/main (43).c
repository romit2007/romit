#include<stdio.h>
#include<conio.h>

void swap(int*x,int*y)
{
    int temp;
    
    printf("\n ---Before sweep---");
    printf("\n x is: %d",*x);
    printf("\n y is: %d",*y);
    
    temp=*x;
    *x=*y;
    *y=temp;
    
    printf("\n ---After sweep---");
    printf("\n x is: %d",*x);
    printf("\n y is: %d",*y);
}

int main()
{
    int a,b;
    
    printf("\n Enter a: ");
    scanf("%d",&a);
    
     printf("\n Enter b: ");
    scanf("%d",&b);
    
    printf("\n ---Before sweep---");
    printf("\n value of a is: %d",a);
    printf("\n value of b is: %d",b);
    
    swap(&a,&b);
    
     printf("\n ---after sweep---");
    printf("\n value of a is: %d",a);
    printf("\n value of b is: %d",b);
    
}