#include <stdio.h>
#include <conio.h>

int main()
{
    int num,first=0,second=1,i,next;
    
    printf("Enter number");
    scanf("%d",&num);
    

    
    for(i=0;i<num;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }
    
    printf("\n fibbonaci series is : %d",next);
    
    
    
    return 0;
}