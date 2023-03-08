#include <stdio.h>

int main(int argc, char const *argv[])
{
  float z = 0,
        x = 0,
        t1 = 0,
        t2 = 0,
        t3 = 0,
        expresionResultante = 0;

  scanf("%f", &x);

  t1 = (x + 5) / ((2*x)*(x + 1));
  t2 = (2*x)*(x + 1) / (x + 5);
  t3 = 2;

  //4.956377

  expresionResultante = t1 + t2 - t3;

  printf("%f\n", expresionResultante);
  return 0;
}