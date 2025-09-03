
#include <stdio.h>

int main()
{
    int num,originalnum,remainder,result=0,n=0;
    
    printf("\n Enter an integer: ");
    scanf("%d",&num);
    
    originalnum = num;
    for(int temp=num;temp!=0;temp/=10)
    {
        n++;
    }
    
     for(int temp=num;temp!=0;temp/=10)
    {
        remainder=temp%10;
        result+=pow(remainder,n);
    }
    
     if (result == originalnum)
        printf("%d is an Armstrong number.\n", originalnum);
    else
        printf("%d is not an Armstrong number.\n", originalnum);


    return 0;
}