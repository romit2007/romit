#include<stdio.h>
#include<conio.h>
void main()
{
     int num, digit, max = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num>0)
    {
        digit = num % 10;         // Get the last digit
        if (digit > max)
            max = digit;          // Update max if this digit is larger
        num = num / 10;           // Remove last digit
    }



    
    printf("Max digit is: %d\n", max);
    
    return 0;
}