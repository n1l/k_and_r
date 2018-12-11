#include <stdio.h>

int main()
{

  float fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step= 20;

  fahr = lower;

  printf("------------------------\n");
  printf("fahr\t|\tcelcius\n");
  printf("------------------------\n");

  while (fahr <= upper) {
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t|\t%6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }

  return 0;
}