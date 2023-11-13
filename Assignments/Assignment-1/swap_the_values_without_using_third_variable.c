// QUESTION - Write a program to swap the values of two variables without using any third variable
#include <stdio.h>

int main() {
    int a, b;

    // Input values for variables a and b
    printf("Enter the value for variable a: ");
    scanf("%d", &a);

    printf("Enter the value for variable b: ");
    scanf("%d", &b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display the swapped values
    printf("After swapping:\n");
    printf("Variable a: %d\n", a);
    printf("Variable b: %d\n", b);

    return 0;
}
