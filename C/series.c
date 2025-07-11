#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,First=0,Second=1,next;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
    printf("\n fibbonaci series");
    
    for(i=0;i<=num;i++)
    {
         printf( "\n %d",First);
        next=First+Second;
        First=Second;
        Second=next;
    }
}
