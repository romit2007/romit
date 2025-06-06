#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b=10;
    
    printf("\n Before swapping: a=%d,b=%d",a,b);
    
    a = a + b; 
    b = a * b; 
    a = a % b; 

    
    printf("\n After swapping: a=%d,b=%d",a,b);
    
    getch();
}

