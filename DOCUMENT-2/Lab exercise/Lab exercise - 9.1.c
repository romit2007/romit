#include<stdio.h>
int main()
{
    int n,i;

    printf("number of array: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<=n;i++)
    {
        printf("Enter num %d: ",i+1);
        scanf("%d",&arr[i]);
    }

     for(i=0;i<=n;i++)
    {
        printf("%d ", arr[i]);
    }
}