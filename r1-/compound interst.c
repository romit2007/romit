#include<stdio.h>
#include<math.h>
int main()
{
 float principal, rate, time, amount, compoundInterest;
    int n;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (as a decimal): ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + rate / n), (n * time));
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total amount = %.2f\n", amount);

    return 0;
}