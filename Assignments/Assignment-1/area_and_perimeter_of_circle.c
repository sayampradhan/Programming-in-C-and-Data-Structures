// QUESTION - Write a program to calculate the area and perimeter of circle.
#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double area = PI * pow(radius, 2);
    double perimeter = 2 * PI * radius;

    printf("The area of the circle is: %lf\n", area);
    printf("The perimeter of the circle is: %lf\n", perimeter);

    return 0;
}
