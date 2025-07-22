#include<stdio.h>
#include<conio.h>
void main()
{
    int pri = 600000;
    float roi = 9.5;
    int year = 5;
    float interest;
    
    interest=pri*roi*year/100;
    float totalamount=pri+interest;
    printf("\n interest is %f",interest);
    printf("\n Your Total amount is %f",totalamount);
    
    getch();
}
