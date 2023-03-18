#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{

  int m,n,numeroTriangulosDistintos,ladoA,ladoB,ladoC;
  float combinacionesPosibles;

  // recibiendo intervalo cerrado de 'm' a 'n'
  scanf("%d %d", &m,&n); //ladoB++; supon m = 3 y n = 4
  getchar();

  ladoA = ladoB = ladoC = m; // -> iniciamos en (por ejemplo) 3 3 3
  combinacionesPosibles = pow(((n - m) + 1), 3.0);

  printf("numero de combinaciones posibles = %.2f", combinacionesPosibles);
  printf("\n");//separar lineas

  // combianciones posibles de intervalo
  for (int i = 0; i < combinacionesPosibles; i++)
  {
    printf("%d %d %d\n", ladoA, ladoB, ladoC);
    
    if ((ladoC == n) && (ladoB == n))
    {
      ladoA++;
      ladoB = m;
      ladoC = m;
    } else if (ladoC == n)
    {
      ladoB++;
      ladoC = m;
    } else{
      ladoC++;
    }
  }
  return 0;
}
