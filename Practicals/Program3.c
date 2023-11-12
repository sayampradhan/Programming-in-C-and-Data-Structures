// AIM - To print the fibbonnacci series using function
#include <stdio.h>

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;

    // Input from the user
    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid number. PLEASE ENTER ONLY A POSITIVE NUMBER\n");
        return 1; // Exit with an error message
    }

    // print fibonacci series
    fibonacciSeries(n); // prints

    return 0;
}
