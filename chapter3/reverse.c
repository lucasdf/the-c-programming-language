#include <string.h>
#include <stdio.h>

void reverse(char s[])
{
  int c, i, j;

  for (i = 0, j = strlen(s) -1; i < j; i++, j--){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

int main(int argc, char *argv[]){
  char toreverse[] = "100 bottles of beer on the wall";
  reverse(toreverse);
  printf("Reverse is %s\n", toreverse);
}
