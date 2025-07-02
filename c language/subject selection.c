#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("\n select your subject \n press1 for mathematics \n press2 for object orinted programs \n press3 for Artificial intelligent");
    printf("\n Enter number");
    scanf("%d",&num);
    
    switch(num)
    {
    case 1: printf("\n mathematics");
    break;
    
    case 2: printf("\n object orinted programs");
    break;
    
    case 3: printf("\n Artificial intelligent");
    break;
    
    default: printf("\n number isn't valid");
    break;
    }
    
    
    
    
    getch();
}
