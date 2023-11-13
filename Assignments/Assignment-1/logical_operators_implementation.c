// Question 1 - Write a program to implement all the logical operators in c
#include<stdio.h>

// main function
int main(){
    //variable declarations
    int a, b, AND, OR, NOT_a, NOT_b;

    // Take input for the first number
    printf("Enter the first number");
    scanf("%d",&a);

    // Take input for the second number
    printf("Enter the second number");
    scanf("%d",&b);

    // AND Operation
    AND = a && b;

    // OR Operation
    OR = a || b;

    // NOT Operation on a
    NOT_a = !a;

    // NOT Operation on b
    NOT_b = !b;

    // Displaying Output for all the logical operations
    printf("AND Operation: %d",AND);
    printf("OR Operation: %d",OR);
    printf("NOT Operation on a: %d",NOT_a);
    printf("NOT Operation on b: %d", NOT_b);

    return 0;
}
