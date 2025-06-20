#include <stdio.h>

int main() {
    int n, i;
    float salary, total = 0.0, average;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter salary of employee %d: ", i);
        scanf("%f", &salary);
        total += salary;
    }

    average = total / n;

    printf("\nTotal employees: %d\n", n);
    printf("Total salary: %.2f\n", total);
    printf("Average salary: %.2f\n", average);

    return 0;
}
