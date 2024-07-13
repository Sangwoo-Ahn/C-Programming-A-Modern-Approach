// Write a program that accepts a date from the user in the form mm/dd/yyyy and
// then dis- plays it in the form yyyymmdd:
//
// Enter a date (mm/dd/yyyy): 2/17/2011
// You entered the date 20110217

#include <stdio.h>

int main(void) {
  int year;
  int month;
  int date;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &date, &year);

  printf("You entered the date %.4d%.2d%.2d", year, month, date);

  return 0;
}
