// Rewrite the program in Programming Project 2 so that it prints the reversal
// of a three-digit number without using arithmetic to split the number into
// digits. Hint: See the upc.c pro- gram of Section 4.1.

#include <stdio.h>

int main(void) {
  int digit_1, digit_10, digit_100;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &digit_100, &digit_10, &digit_1);

  printf("The reversal is: %d%d%d", digit_1, digit_10, digit_100);

  return 0;
}
