#include <stdio.h>
#include <conio.h>

int main()
{
    int n,factorial=1,i;
    
    printf("Enter num");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("\n Factorial isnot negative");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            factorial*=i;
        }
           printf("Factorial of %d is %d\n", n, factorial);
  }

    return 0;
}