#include <stdio.h>

#define SKIP ' '

int main()
{
  int c;
  while ((c = getchar()) != EOF) {

    if (c == SKIP) {
      while ((c = getchar()) == SKIP);
      putchar(SKIP);
      if (c == EOF) {
        break;
      }
    }

    putchar(c);
  }

  return 0;
}