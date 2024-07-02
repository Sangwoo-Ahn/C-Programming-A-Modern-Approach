// Write a program that asks the user to enter a U.S. dollar amount and then
// shows how to pay that amount using the smallest number of $20, $10, $5, and
// $1 bills:
//
//    Enter a dollar amount: 93
//    $20 bills: 4
//    $10 bills: 1
//     $5 bills: 0
//     $1 bills: 3
//
// Hint: Divide the amount by 20 to determine the number of $20 bills needed,
// and then reduce the amount by the total value of the $20 bills. Repeat for
// the other bill sizes. Be sure to use integer values throughout, not
// floating-point numbers.
#include <stdio.h>

int main(void) {
  int dollars;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollars);

  int dollars_temp = dollars;

  int bills_20 = dollars_temp / 20;
  dollars_temp -= bills_20 * 20;

  int bills_10 = dollars_temp / 10;
  dollars_temp -= bills_10 * 10;

  int bills_5 = dollars_temp / 5;
  dollars_temp -= bills_5 * 5;

  int bills_1 = dollars_temp / 1;
  dollars_temp -= bills_1 * 1;

  printf("$20 bills: %d\n", bills_20);
  printf("$10 bills: %d\n", bills_10);
  printf("$5 bills: %d\n", bills_5);
  printf("$1 bills: %d\n", bills_1);
}
