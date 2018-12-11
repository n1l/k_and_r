#include <stdio.h>

int main()
{

  // float fahr, celcius;
  // int lower, upper, step;

  // lower = 0;
  // upper = 300;
  // step= 20;

  // fahr = lower;

  printf("------------------------\n");
  printf("fahr\t|\tcelcius\n");
  printf("------------------------\n");

  int fahr;
  for(fahr = 300; fahr >= 0; fahr-=20)
  {
    printf("%3d\t|\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
  }

  return 0;
}