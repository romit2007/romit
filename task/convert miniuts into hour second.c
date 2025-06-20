#include<stdio.h>
#include<conio.h>
void main()
{
    int minitus;
    int seconds;
    float hours;
    
    printf("Enter time in minitus: ");
    scanf("%d",&minitus);
    
    hours=minitus/60;
    seconds=minitus*60;
    
    printf("\n minitus is equalto %2d\n",minitus);
    printf("\n hours %2f\n",hours);
    printf("\n second %2d\n",seconds);
    

    
    
    
    getch();
}