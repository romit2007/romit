#include<stdio.h>
#include<conio.h>
void main()
{
    float fahernhit,celsius;
    
    printf("Enter tempretur in Fahernhit: ");
    scanf("%f",&fahernhit);
    
    celsius=5.0/9.0*(fahernhit-32);
    
    printf("tempreture in celsius: %2f\n",celsius);
}