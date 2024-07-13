// Write a program that asks the user to enter a two-digit number, then prints
// the number with its digits reversed. A session with the program should have
// the following appearance:

// Enter a two-digit number: 28
// The reversal is: 82

// Read the number using %d, then break it into two digits. Hint: If n is an
// integer, then n % 10 is the last digit in n and n / 10 is n with the last
// digit removed.

#include <stdio.h>

int main(void) {
  int input_num;

  printf("Enter a two-digit number: ");
  scanf("%d", &input_num);

  int digit_1 = input_num % 10;
  int digit_10 = (input_num / 10) % 10;

  printf("The reversal is: %d%d", digit_1, digit_10);

  return 0;
}
