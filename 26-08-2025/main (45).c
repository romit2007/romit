#include<stdio.h>
#include<conio.h>

int prime(num)
{
    if(num<=1)
    return 0;
    
    for (int i = 2;i*i <= num; i++) 
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("\n Enter number");
    scanf("%d",&num);
    
    if(prime(num))
    {
        printf("\n Prime number");
    }
    else
    {
        printf("\n Normal number");
    }
}

