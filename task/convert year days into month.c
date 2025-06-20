#include<stdio.h>
#include<conio.h>
void main()
{
    float year;
    int month;
    float days;
    
    printf("Enter number of year: ");
    scanf("%f",&year);
    
    month=year*12;
    days=month*365;
    
    printf("\n year is equal to %2f\n",year);
    printf("%2d\n months \n ",month);
    printf("\n days %2f\n",days);
    

    
    
    
    getch();
}