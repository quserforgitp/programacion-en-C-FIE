#include <stdio.h>

int main(int argc, char const *argv[])
{
  float a = 0,
        b = 0,
        c = 0,
        d = 0,
        e = 0,
        f = 0,
        x = 0,
        y = 0;


  scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
  x = (f*b - e*c) / (d*b - e*a);
  y = (c - a*x) / b;

  printf("%f %f\n", x, y);

  return 0;
}