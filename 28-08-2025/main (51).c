#include <stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int num) {
    int originalNum = num;
    int remainder, result = 0;
    int n = countDigits(num);

    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, n);
        num /= 10;
    }

    return result == originalNum;
}


int main()
{
    int number;

    printf("Enter num: ");
    scanf("%d", &number);

    int prime = isPrime(number);
    int armstrong = isArmstrong(number);

    if (prime && armstrong)
        printf("%d is both a Prime and an Armstrong number.\n", number);
    else if (prime)
        printf("%d is a Prime number.\n", number);
    else if (armstrong)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d this number isnot prime/armstrong Number.\n", number);

    return 0;
}

