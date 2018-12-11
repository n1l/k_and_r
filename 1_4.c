#include <stdio.h>

int main()
{

  float fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step= 20;

  celcius = lower;

  printf("------------------------\n");
  printf("celcius\t|\tfahr\n");
  printf("------------------------\n");

  while (celcius <= upper) {
    fahr = ((9.0/5.0) * celcius) + 32;
    printf("%6.1f\t|\t%3.0f\n", celcius, fahr);
    celcius = celcius + step;
  }

  return 0;
}