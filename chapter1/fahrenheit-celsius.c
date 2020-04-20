#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
  float fahrenheit, celsius;

  fahrenheit = LOWER;
  printf("  F      C\n");
  while (fahrenheit <= UPPER) {
    celsius = (5.0 / 9) * (fahrenheit - 32);
    printf("%3.0f %6.1f\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + STEP;
  }
}
