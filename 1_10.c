#include <stdio.h>

#define BSLASH 92
#define BSPACE '\b' // doesn't work
#define TAB '\t'

int main()
{
  int c;
  while ((c = getchar()) != EOF) {

    if (c == BSLASH) {
      printf("\\\\");
    } else if (c == BSPACE) {
      printf("\\b");
    } else if (c == TAB) {
      printf("\\t");
    } else {
      putchar(c);
    }
  }

  return 0;
}