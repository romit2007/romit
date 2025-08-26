#include <stdio.h>


int Prime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void showprimebetweeninterval(int start, int end) {
    printf("\nPrime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (Prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main()
{
    int start, end;

    printf("Enter the start of the interval: ");
    scanf("%d", &start);

    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    showprimebetweeninterval(start, end);

    return 0;
}
