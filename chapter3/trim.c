#include <string.h>
#include <stdio.h>

int trim(char s[]){
  int n;

  for (n = strlen(s)-1; n >= 0; n--){
    if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
      break;}
  s[n+1] = '\0';
  return n;
}

int main(int argc, char *argv[]){
  char text[] = "Hello Darkness      \n    ";
  printf("Before trim \n%s\n", text);
  trim(text);
  printf("After trim \n%s\n", text);
}
