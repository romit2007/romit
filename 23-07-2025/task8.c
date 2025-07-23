#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    
    printf("Enter year");
    scanf("%d",&num);
    
    if(num%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("common year");
    }
    return 0;
}