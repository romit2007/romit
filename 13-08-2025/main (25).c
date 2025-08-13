#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
  int temp;

   printf("\n  Before Swap"); 
   printf("\n Fun Value of x is : %d ",*x);
   printf("\n Fun Value of y is : %d ",*y);
   
   temp = *x; 
   *x = *y;    
   *y = temp; 
   
   printf("\n After Swap" ); 
   printf("\n Fun Value of x is : %d ",*x);
   printf("\n Fun Value of y is : %d ",*y);
}

int main()
{
    int a=5;
    int b=3;
    
     printf("\n  Before Swap"); 
   printf("\n  Value of x is : %d ",a);
   printf("\n Value of y is : %d ",b);
   
   swap(&a,&b);
   
    printf("\n after Swap"); 
   printf("\n  Value of x is : %d ",a);
   printf("\n Value of y is : %d ",b);
   
   
    
    
    
}