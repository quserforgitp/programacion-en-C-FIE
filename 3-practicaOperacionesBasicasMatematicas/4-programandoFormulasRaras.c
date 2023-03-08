#include <stdio.h>

int main() {
  int c = 0, p = 0, h = 0;
//   total de cachorros
  scanf("%d %d %d", &c, &p, &h);

// lo que se queda (P) mas los que quedan de la raparticion equitativa entre sus hijos y esposa
  p = p + ( c - p )%(h + 1);
  
  printf("%d\n", p);

  return 0;
}