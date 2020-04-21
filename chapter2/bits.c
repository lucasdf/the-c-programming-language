
/* counts number of 1-bits in x */
int bitcount(unsigned x) {
  int b;
  for (b = 0; x != 0; x >>= 1)
    if (x & 01)
      b++;
  return b;
}

main() {
  printf("%d\n", bitcount(0));
  printf("%d\n", bitcount(1));
  printf("%d\n", bitcount(2));
  printf("%d\n", bitcount(3));
}
