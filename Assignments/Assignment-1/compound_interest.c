// QUESTION = Write a program to calculate compound interest.
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double principal, rate, time, compoundInterest;

    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Input annual interest rate
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    // Convert rate to decimal form
    rate = rate / 100;

    // Input time (in years)
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate compound interest
    compoundInterest = principal * pow((1 + rate), time) - principal;

    // Display the result
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
