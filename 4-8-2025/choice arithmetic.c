#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num,sum,sub,multi,divison;

    printf("Enter num1");
    scanf("%d",&num1);

    printf("Enter num2");
    scanf("%d",&num2);

    printf("\n press1 sum \n press2 sub \n press3 multi \n press4 divison");
    printf("\n Enter number");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
        sum=num1+num2;
        printf("\n %d + %d = %d",num1,num2,sum);
        break;

        case 2: 
        sub=num1-num2;
        printf("\n %d - %d = %d",num1,num2,sub);
        break;

        case 3:
        multi=num1*num2;
        printf("\n %d * %d = %d",num1,num2,multi);
        break;

        case 4: 
        divison=num1/num2;
        printf("\n %d / %d = %d",num1,num2,divison);
        break;
        
        default:
        printf("\n number invalid");
        break;
    }

}