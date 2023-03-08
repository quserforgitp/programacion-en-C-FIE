#include <stdio.h>

int main() {
  int N, P;
  const int base = 3;

  scanf("%d %d", &N, &P);

  int numeroPantes = (N - P) > 0 ? N - P : (N - (P % base)) + base;
  int numeroPdespues = (N + P) <= 3 ? N + P : (N + (P % base)) - ((N + P) > 3) * base;

  printf("%d %d\n", numeroPantes, numeroPdespues);

  return 0;
}
