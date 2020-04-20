#include <stdio.h>

main()
{
  int c, i, numberWhitespaces, numberOthers;
  int numberDigits[10];

  numberWhitespaces = numberOthers = 0;
  for (i = 0; i < 10; ++i)
    numberDigits[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++numberDigits[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      +numberWhitespaces;
    else
      ++numberOthers;

  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf("%d: %d, ", i, numberDigits[i]);
  printf(", white space = %d, other = %d\n", numberWhitespaces, numberOthers);
}
