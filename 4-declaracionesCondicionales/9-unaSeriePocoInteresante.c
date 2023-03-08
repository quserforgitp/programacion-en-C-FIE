#include <stdio.h>
int main(int argc, char const *argv[])
{
  int N = 0,
      numeroPantes = 0,
      numeroPdespues = 0;
  long int P = 0;
  int const base = 3;

  scanf("%d %ld",&N,&P);
  
  // CONDICIONES PARA DETERMINAR EL NUMERO A P POSICIONES ANTES
  if ((N - P) > 0)
  {
    numeroPantes = N - P;
  } else if ((N - (P % base)) <= 0)
  {
    numeroPantes = (N - (P % base)) + base;
  } else {
    numeroPantes = N - (P % base);
  }

  // CONDICIONES PARA DETERMINAR EL NUMERO A P POSICIONES DESPUES

  if ((N + P) <= 3)
  {
    numeroPdespues = N + P;
  } else if(N + (P % 3) > 3)
  {
    numeroPdespues = (N + (P % 3)) - base;
  } else {
    numeroPdespues = N + (P % 3);
  }
    
  
  // imprimiendo valor para numero a P posiciones antes de N
  printf("%d %d\n",numeroPantes, numeroPdespues);
  return 0;
}
