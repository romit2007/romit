#include<stdio.h>
#include<conio.h>
void main()
{
    int temp;
    
    printf("Enter temp: ");
    scanf("%d",&temp);
    
    if(temp>=50)
    {
        printf("hot");
    }
    else if(temp>=35)
    {
        printf("warm");
    }
    else
    {
        printf("cold");
    }
        
    
    
    
    getch();
}
