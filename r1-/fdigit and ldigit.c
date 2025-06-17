#include<stdio.h>
#include<conio.h>
void main()
{
    int fdigit,ldigit,num,ans=0;
    
    printf("Enter number: ");
    scanf("%d",&num);//1234
    
    ldigit=num%10;
    
    while(num>0)
    {
        if(num>15)
                   num=num/10;
        else
        {
            fdigit=num;
            ans=fdigit+ldigit;
            num=num/10;
        }
    }


    
    
    printf("sum of first digit and last digit is : %d",ans);
    getch();
}
