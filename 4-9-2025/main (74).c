

#include <stdio.h>

void tops(int*num)
{
    *num*=2;
    printf("\n %d",*num);
}


int main()
{
    int x;
    
    printf("Enter x: ");
    scanf("%d",&x);
    tops(&x);
    printf("\n %d",x);

    return 0;
}