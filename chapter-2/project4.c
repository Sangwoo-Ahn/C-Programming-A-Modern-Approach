// Write a program that asks the user to enter a dollars-and-cents amount, then
// displays the amount with 5% tax added:
//
// Enter an amount: 100.00
// With tax added: $105.00

#include <stdio.h>

#define TAX_MULTIPLIER 1.05f

int main(void) {
  float money;

  printf("Enter an amount: ");
  scanf("%f", &money);

  printf("With tax added: $%.2f", money * TAX_MULTIPLIER);
}
