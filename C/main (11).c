#include<stdio.h>
#include<conio.h>
int main()
{
    int num,num1,num2;
    int sum,multi,divi,sub;
    
    printf("Enter num1");
    scanf("%d",&num1);
    
     printf("Enter num2");
    scanf("%d",&num2);
    
    
    printf("\n press1 sum \n press2 multi \n press3 sub \n press4 divi");
    printf("\n Enter num");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1: sum = num1+num2;
                printf("\n %d + %d = %d",num1,num2,sum);
                break;
                
        case 2: multi = num1*num2;
                printf("\n %d * %d = %d",num1,num2,multi);
                break;
        
        case 3: sub = num1-num2;
                printf("\n %d - %d = %d",num1,num2,sub);
                break;
        
         case 4: divi= num1/num2;
                printf("\n %d / %d = %d",num1,num2,divi);
                break;
                        
        
        default: printf("Choice isn't valid");
        break;
    }
    
    
    getch();
}

