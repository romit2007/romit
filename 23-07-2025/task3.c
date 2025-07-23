#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    int square,cube;
    
    printf("Enter number");
    scanf("%d",&num);
    
    square=num*num;
    cube=num*num*num;
    printf("\n square is %d",square);
    printf("\n cube is %d",cube);

    return 0;
}