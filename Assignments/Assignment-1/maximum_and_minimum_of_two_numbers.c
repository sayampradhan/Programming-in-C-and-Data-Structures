// QUESTION - Write a program to find the maximum and minimum of two numbers without using any loop or condition
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find minimum and maximum using arithmetic operations
    int minimum = b + ((a - b) & ((a - b) >> (sizeof(int) * 8 - 1)));
    int maximum = a - ((a - b) & ((a - b) >> (sizeof(int) * 8 - 1)));

    // Output the results
    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);

    return 0;
}
