#include<stdio.h>
#include<conio.h>
int main()
{
     int num1,num2,num;
     int sum,sub,multi,division;
     
    printf("Enter num1: ");
    scanf("%d",&num1);
    
     printf("Enter num2: ");
    scanf("%d",&num2);
     
    printf("\n press1 for sum \n press2 for sub \n press3 for multi \n press4 for division");
    printf("\n Enter number: ");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1 : sum=num1+num2;
                 printf("\n %d + %d = %d",num1,num2,sum);
                 scanf("%d %d %d",&num1,&num2,&sum);
                 break;
                 
        case 2: sub=num1-num2;
                printf("\n %d - %d = %d",num1,num2,sub);
                scanf("%d %d %d",&num1,&num2,&sub);
                break;
                
        case 3: multi=num1*num2;
                printf("\n %d * %d = %d",num1,num2,multi);
                scanf("%d %d %d",&num1,&num2,&multi);
                break;
                
         case 4: division=num1/num2;
                printf("\n %d / %d = %d",num1,num2,division);
                scanf("%d %d %d",&num1,&num2,&division);
                break;
                
        default: printf("Invalid choice");
                 break;
    }
    
    
    return 0;
}