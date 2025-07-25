#include <stdio.h>
#include <conio.h>

int main()
{
    int num,fdigit,ldigit,ans=0;
    
    printf("Enter number");
    scanf("%d",&num);
    
    
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
    
    return 0;
}