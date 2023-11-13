// QUESTION 2: Write a program to calculate the area of a triangle
#include<stdio.h>

// main function
int main(){
    // variable declarations
    int height, base, area;

    // take input for height and base
    printf("Height of triangle: ");
    scanf("%d",&height);
    printf("Base of triangle: ");
    scanf("%d",&base);
    
    // create blank lines
    printf("\n \n \n");

    // area calculation
    area = 0.5 * base * height;

    // display the area of triangle
    printf("Area of triangle: %d", area);

    return 0;
}
