#include<stdio.h>
#include<conio.h>
void main()
{
    
    int num;
    int square,cube;
    
    printf("Enter num");
    scanf("%d",&num);
    
    
    {
        square=num*num;
        printf("\n %d * %d = %d",num,num,square);
        
        cube=num*num*num;
        printf("\n %d * %d * %d = %d",num,num,num,cube);
        
    }
    
    getch();
}