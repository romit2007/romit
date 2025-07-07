#include<stdio.h>
#include<conio.h>
void main()
{
    int num,ans=0,reversed_num = 0,remainder;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
     while(num!=0)
    {
        remainder=num%10;
        reversed_num=reversed_num*10+remainder;
        num/=10;
    }
    
    
    
    printf("Reversed num = %d\n",reversed_num);
    
    
    
    
    
    
    getch();
}

