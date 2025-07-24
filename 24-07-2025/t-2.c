#include <stdio.h>
#include <conio.h>

int main()
{
    int num,num1,num2,sum,multi,sub,divison;
    
    printf("Enter num1");
    scanf("%d",&num1);
    
    printf("Enter num2");
    scanf("%d",&num2);
    
    printf("\n press1 for sum \n press2 for multi \n press3 for sub \n press4 for divison");
    printf("\n Enter number");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1 : sum = num1+num2;
                 printf("\n %d + %d = %d",num1,num2,sum);
                 break;
                 
        case 2 : sub = num1-num2;
                 printf("\n %d - %d = %d",num1,num2,sub);
                 break;
                 
        case 3 : multi = num1*num2;
                 printf("\n %d * %d = %d",num1,num2,multi);
                 break;
                 
        case 4 : divison = num1/num2;
                 printf("\n %d / %d = %d",num1,num2,divison);
                 break;
                 
                 
        
        default : printf("Number isn't vaild");
        break;
    }
    
    

    return 0;
}