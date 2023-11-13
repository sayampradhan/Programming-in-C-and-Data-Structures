// AIM - To find the sum of two numbers using functions
#include<stdio.h>


// sum function
void sum(int a, int b) {
    // sum of two numbers
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
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
  sum(num1, num2);
  
  return 0;
}
