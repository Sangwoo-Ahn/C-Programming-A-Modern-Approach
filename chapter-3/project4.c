// Write a program that prompts the user to enter a telephone number in the form
// (xxx) xxx- xxxx and then displays the number in the form xxx.xxx.xxx:

// Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
// You entered 404.817.6900

#include <stdio.h>

int main(void) {
  int part_1;
  int part_2;
  int part_3;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &part_1, &part_2, &part_3);

  printf("You entered %d.%d.%d", part_1, part_2, part_3);

  return 0;
}
