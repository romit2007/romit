#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2;
    int sum,multi,divison,sub;
    
    printf("Enter num1 ");
    scanf("%d",&num1);
    
    printf("Enter num2 ");
    scanf("%d",&num2);
    
    sum=num1+num2;
    printf("\n %d + %d = %d",num1,num2,sum);
    
    sub=num1-num2;
    printf("\n %d - %d = %d",num1,num2,sub);
    
    multi=num1*num2;
    printf("\n %d * %d = %d",num1,num2,multi);
    
    divison=num1/num2;
    printf("\n %d / %d = %d",num1,num2,divison);

    return 0;
}