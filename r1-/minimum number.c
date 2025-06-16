#include<stdio.h>
#include<limits.h>
int main()
{
    int n, i, num, min = INT_MAX;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num < min)
        {
            min = num;
        }
    }

    printf("Minimum value: %d\n", min);

    return 0;
}

    
    