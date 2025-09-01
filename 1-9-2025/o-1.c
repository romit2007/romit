#include<stdio.h>
#include<conio.h>
int main()
{
    int month,days;

    printf("Enter days: ");
    scanf("%d",&days);

    month=days/30;
    days=days%30;

    printf("month=%d ",month);
    printf("days=%d ",days);

}