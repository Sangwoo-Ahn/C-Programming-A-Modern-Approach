// Modify the program of Programming Project 2 so that it prompts the user to
// enter the radius of the sphere.

#include <stdio.h>

#define SPHERE_FORMULA (4.0f / 3.0f * 3.14f) // * r * r * r

int main(void) {
  float radius;

  printf("Input the radius: ");
  scanf("%f", &radius);

  printf("Volume = %.2f", SPHERE_FORMULA * radius * radius * radius);

  return 0;
}
