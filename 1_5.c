#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
  printf("------------------------\n");
  printf("fahr\t|\tcelcius\n");
  printf("------------------------\n");

  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr-=STEP) {
    printf("%3d\t|\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
  }

  return 0;
}