#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter num: ");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("possitive");
    }
    else if(num<0)
    {
        printf("Negative");
    }
    else
    {
        printf("zero");
    }
    
    
    getch();
}
    
                    
