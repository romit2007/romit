#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    
    printf(" Enter num1,num2,num3: ");
    scanf("%d""%d""%d",&num1,&num2,&num3);
    
    if(num1>num2)
    {
      if(num1>num3)
      {
          printf("%d is big",num1);
      }
      else
      {
          printf("%d is big",num3);
      }
    }
    else
    {
        if(num2>num3)
        {
            printf("%d is big",num2);
        }
        else
        {
            printf("%d is big",num3);
            
            if(num1>num3)
            {
                 printf("%d is big",num1);
            }
            else
            {
                 printf("%d is big",num3);
            }
        }
    }
    
    getch();
}