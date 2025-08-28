#include <stdio.h>

int main()
{
    int num,i,j;
    
    printf("Enter num");
    scanf("%d",&num);
    
    for (i = 1; i <=num; i++) 
    {

        for (j = 1; j <= i; j++) 
        {
            printf("%d",j%2);
            
        }
        printf("\n");
    }
    return 0;
}