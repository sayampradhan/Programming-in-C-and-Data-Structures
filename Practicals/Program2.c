// AIM - To print the following Pyramid
//          *
//         ***
//        *****
//       *******
//      *********
//     ***********

#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Input the number of rows from the user
    printf("\nNumber of rows: ");
    scanf("%d", &rows);

    // Loop to print the pyramid
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
