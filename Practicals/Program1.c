// AIM - TO CHECK WHEATHER A YEAR IS A LEAP YEAR OR NOT

// import neccessary modules
#include <stdio.h>

// main function
int main(){
    int year;

    // taking input from the user
    printf("Enter year: ");
    scanf("%d", &year);

    // condition
    if ((year%4==0) && (year%100==0) || (year%400==0))
    printf("%d is a leap year", year);

    else
    printf("%d is not a leap year", year);

    return 0;

}
