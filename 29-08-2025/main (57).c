

#include <stdio.h>

int main()
{
    int i,j,k=1,num;
    
    printf("Enter number: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }

    return 0;
}