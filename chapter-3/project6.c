// Modify the addfrac.c program of Section 3.2 so that the user enters both
// fractions at the same time, separated by a plus sign:

// Enter two fractions separated by a plus sign: 5/6+3/4
// The sum is 38/24

#include <stdio.h>

int main(void) {
  int fraction_1_numerator;
  int fraction_1_denominator;
  int fraction_2_numerator;
  int fraction_2_denominator;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &fraction_1_numerator, &fraction_1_denominator,
        &fraction_2_numerator, &fraction_2_denominator);

  int sum_numerator = fraction_1_numerator * fraction_2_denominator +
                      fraction_2_numerator * fraction_1_denominator;
  int sum_denominator = fraction_1_denominator * fraction_2_denominator;

  printf("The sum is %d/%d", sum_numerator, sum_denominator);

  return 0;
}
