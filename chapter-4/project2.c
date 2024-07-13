// Extend the program in Programming Project 1 to handle three-digit numbers

#include <stdio.h>

int main(void) {
  int input_num;

  printf("Enter a three-digit number: ");
  scanf("%d", &input_num);

  int digit_1 = input_num % 10;
  int digit_10 = (input_num / 10) % 10;
  int digit_100 = (input_num / 100) % 10;

  printf("The reversal is: %d%d%d", digit_1, digit_10, digit_100);

  return 0;
}
