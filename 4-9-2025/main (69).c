#include<stdio.h>
#include<conio.h>

void swap(int*a,int*b)
{
    int c=0;
    printf("\n Before sweep value in fuction: %d,%d",*a,*b);
    {
        c=*a;
        *a=*b;
        *b=c;
    printf("\n After sweep value in function: %d,%d",*a,*b);
    }
    
    
}

int main()
{
    int x,y;
    
    x=9;
    y=18;
    
    printf("\n Before sweep value in function: %d,%d",x,y);
    swap(&x,&y);
    printf("\n After Swap Value : %d,%d",x,y);
}