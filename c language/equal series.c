#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
         printf("\n");
        
    }
}