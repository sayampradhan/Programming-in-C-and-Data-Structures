// AIM - To find the sum of two numbers
#include<stdio.h>


// sum function
void sub(int a, int b) {
    // sum of two numbers
    int sub = a - b;
    printf("%d - %d = %d\n", a, b, sub);
}


// main function
int main(){
  int num1, num2;
  
  // taking input number 1
  printf("num1: ");
  scanf("%d", &num1);

  // taking input number 2
  printf("num2: ");
  scanf("%d", &num2);

  // calling sum function
  sub(num1, num2);
  
  return 0;
}
