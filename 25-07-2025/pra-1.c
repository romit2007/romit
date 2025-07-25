#include <stdio.h>
#include <conio.h>

int main()
{
    int num,reversenum=0,remainder;
    
    printf("Enter number");
    scanf("%d",&num);
    
    while(num!=0)
    {
        remainder=num%10;
        reversenum=reversenum*10+remainder;
        num/=10;
        
    }

     printf("Reversed num = %d\n",reversenum);
    
    
    
    return 0;
}