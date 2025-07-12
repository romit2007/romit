#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5];
    int i,max;
    
    printf("\n Enter number");
    
    for(i=0;i<5;i++)
    {
        printf("\n Enter number one by one");
        scanf("%d",&arr[i]);
    }
    
    max=arr[0];
    
    for(i=0;i<5;i++)
    {
        max=arr[i];
    }
     
    printf("maximum digit is %d\n" , max);
}