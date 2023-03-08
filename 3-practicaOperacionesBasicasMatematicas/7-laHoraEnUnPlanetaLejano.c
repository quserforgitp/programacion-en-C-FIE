#include <stdio.h>

int main(int argc, char const *argv[])
{
  int s = 0,
      dias = 0,
      horas = 0,
      minutos = 0;
        // ,factorSegDia = 0,
        // factorSegHora = 0,
        // factorSegMin = 0;

  // 42000s  = 1dia   1dia/42000s = 0.00002381
  // 3500s   = 1hora  1hora/3500s = 0.000285714
  // 50s     = 1min   1min/50s    = 0.02

  // factorSegDia  = 0.00002381;
  // factorSegHora = 0.000285714;
  // factorSegMin  = 0.02;
  scanf("%d", &s);

  dias = s / 42000;
  printf("%d ",dias);
  s %= 42000;

  horas = s / 3500;
  printf("%d ",horas);
  s %= 3500;

  minutos = s / 50;
  printf("%d ",minutos);
  s %= 50;

  printf("%d ",s);

  return 0;
}