#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    
    printf("Enter num");
    scanf("%d",&num);
    
    if(num>=10 && num<=50)
    {
        printf("under Range");
    }
    else
    {
        printf("Out of range");
    }
}

