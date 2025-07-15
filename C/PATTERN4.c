#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int num;
    char alphabet;
    
    printf("Enter number");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",j+'A');
            
        }
        printf("\n");
    }
    
}