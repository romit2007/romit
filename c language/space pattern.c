#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,num;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=(5-i);j++)
        {
            printf(" ");
        }
          for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
        
    
}