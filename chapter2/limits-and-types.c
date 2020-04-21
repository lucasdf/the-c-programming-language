#include <limits.h>
#include <float.h>
#include <stdio.h>
#include <math.h>

void change_array_invalid(const char mychar[])
{
  // compiler error since mychar is const readonly in this context
  //mychar[0] = "a";
}

int lower(int c)
{
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}

// removes occurences of x in s
void squeeze(char s[], int c)
{
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

int main()
{
  printf("%lld\n", LLONG_MAX);
  printf("%lld\n", LLONG_MAX+1);

  // 'd' is an integer that represents the character d
  printf("%d\n", 'd');
  // "d" is an array of chars containing the letter d
  printf("d\n");
  // final element from char array is a delimiter '\0'
  printf("%d\n", "d"[1]);
  // allegedly it prints numerical value of "d", 52
  printf("%d\n", "d"[0] - '0');
  // should be "d", but it is 4?
  printf("%c\n", 52);

  // sequential values from 0...X or as specified
  enum boolean {NO, YES, MAYBE};
  printf("%d %d %d\n", NO, YES, MAYBE);
  
  enum integer {LALALA=100, DUNNO=200};
  printf("%d %d\n", LALALA, DUNNO);

  printf("%c\n", lower('A'));
  printf("%c\n", lower(100));

  printf("%f\n", sqrt((double) 10));

  int n = 5;
  int x = 0;
  x = n++; // x == 5, n == 6
  x = ++n; // x == 6, n == 6

  char c[] = "aloha";
  squeeze(c, 'a');
  // "loh"
  printf("%s\n", c);
}
