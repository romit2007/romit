#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5];
    int i,max;
    
    printf("\n Enter 5 number");
    
    for(i=0;i<5;i++)
    {
        printf("\n Enter number");
        scanf("%d",&arr[i]);
    }
    
    max=arr[0];
    
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    
     printf("\n Max num=%d\n",max);
    
    
    
    return 0;
}