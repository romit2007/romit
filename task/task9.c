#include <stdio.h>

int main() 
{
    int arr[5];
    int i, min;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) 
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    min = arr[0]; 

    for(i = 0; i < 5; i++) 
    {
        if(arr[i] < min) 
        {
            min = arr[i];
        }
    }

    printf("The minimum number is: %d\n", min);

    return 0;
}

    


