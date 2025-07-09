#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",i+'A');
        }
         printf("\n");
        
    }
}