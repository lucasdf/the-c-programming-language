#include <assert.h>
#include <stdio.h>
#include <string.h>

void squeeze(char a[], char b[]) {
  int i, j, k;
  char c;
  // nested loops go brrr
  for (k = 0; b[k] != '\0'; k++) {
    c = b[k];
    for (i = j = 0; a[i] != '\0'; i++)
      if (a[i] != c) {
        a[j] = a[i];
        j++;
      }
    a[j] = '\0';
  }
}

int main() {
  char a[] = "abc";
  squeeze(a, "cde");
  printf("%s\n", a);
  assert(strcmp(a, "ab") == 0);
}
