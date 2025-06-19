#include <stdio.h>
#include <conio.h>
int main()
{
    int num=11;
    int cnt=0;
    
    if(num<=1)
    {
        printf("%d is not prime",num);
    }
    else
    {
        for (int i=1;i<=num;i++)
        {
            if(num%i==0)
              cnt++;
        }
    }
    if(cnt>2)
    {
        printf("%d is not prime",num);
    }
    else
    {
        printf("%d is prime",num);
    }
}

    
