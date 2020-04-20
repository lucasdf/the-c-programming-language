#include <stdio.h>

main()
{
  printf("hello, world\n");
  // single statement while, overflow
  short i = 1;
  while (i >= 1)
    i = i + 1;
  printf("%d", i);
}
