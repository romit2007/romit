#include<stdio.h>
#include<conio.h>

void multiplication(int a,int b,int*result)
{
     *result=a*b;
    
}

int main()
{
    
    int x,y,ans=0;
    
    printf("\n Enter x: ");
    scanf("%d",&x);
    
     printf("\n Enter y: ");
    scanf("%d",&y);
    
    
     multiplication(x,y,&ans);
    
    printf("%d * %d = %d",x,y,ans);
    
    

    return 0;
}