#include <stdio.h>
#include <conio.h>
int main()
{
    int marks1,marks2,marks3,marks4,marks5,total,avg;
    
    
    printf("Enter marks1");
    scanf("%d",&marks1);
    
    printf("Enter marks2");
    scanf("%d",&marks2);
    
    printf("Enter marks3");
    scanf("%d",&marks3);
    
    printf("Enter marks4");
    scanf("%d",&marks4);
    
    printf("Enter marks5");
    scanf("%d",&marks5);

    total=marks1+marks2+marks3+marks4+marks5;
    printf("\n %d + %d + %d + %d + %d = %d",marks1,marks2,marks3,marks4,marks5,total);
    avg=total/5;
    printf("\n perchantage are %d",avg);

    return 0;
}