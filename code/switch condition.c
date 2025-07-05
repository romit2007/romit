#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num;
    int sum,multi,divison,sub;
    
    printf("\n Enter num1,num2: ");
    scanf("%d %d",&num1,&num2);
    printf("\n press1 for sum \n press2 for multiplication \n press3 for divison \n press4 for substraction");
    printf("\n Enter number: ");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1 :  sum=num1+num2;
    printf("\n %d + %d = %d",num1,num2,sum);
    break;
    
    
    case 2 :  multi=num1*num2;
    printf("\n %d * %d = %d",num1,num2,multi);
    break;
    
    case 3 : divison=num1/num2;
    printf("\n %d / %d = %d",num1,num2,divison);
    break;
    
     case 4 :  sub=num1-num2;
    printf("\n %d - %d = %d",num1,num2,sub);
    break;
    
    default : printf("wrong choice");
    break;
    
    
        
    
        getch();
    }
    
    
    
    



    
    
    getch();
}

    
    
    
    
    