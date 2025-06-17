#include<stdio.h>
#include<conio.h>
void main()
{

    int num, digit;
    int min = 9;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        min = 0;
    } else {
        if (num < 0)
            num = -num; 

        while (num > 0) {
            digit = num % 10;
            if (digit < min)
                min = digit;
            num = num / 10;
        }
    }

    printf("Min digit is: %d\n", min);
    return 0;
}