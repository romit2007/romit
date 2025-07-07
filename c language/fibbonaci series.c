#include<stdio.h>
#include<conio.h>
int main()
{
    int n,First=1,second=2,next,i;
    
    printf("Enter numbers: ");
    scanf("%d",&n);
    
    printf("Fibbonaci series: ");
    
    for(i=0;i<=n;i++)
    {
        printf("%d",First);
        next=First+second;
        First=second;
        second=next;
    }
    
    
    
    return 0;
}




