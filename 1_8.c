#include <stdio.h>

int main()
{
  int c;
  int t_count = 0;
  int n_count = 0;
  int s_count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      t_count++;
    }

    if (c == '\n') {
      n_count++;
    }

    if (c == ' ') {
      s_count++;
    }
  }

  printf("spaces - %d, tabs - %d, newlines - %d\n", s_count, t_count, n_count);

  return 0;
}