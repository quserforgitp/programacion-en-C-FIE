#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{

  int m,n,numeroTriangulosDistintos,ladoA,ladoB,ladoC,
      p,q; // p -> impar, q -> par
  float combinacionesPosibles;

  // recibiendo intervalo cerrado de 'm' a 'n'
  scanf("%d %d", &m,&n); //ladoB++; supon m = 3 y n = 4
  getchar();

  ladoA = ladoB = ladoC = m; // -> iniciamos en (por ejemplo) 3 3 3
  combinacionesPosibles = pow(((n - m) + 1), 3.0);

  printf("numero de combinaciones posibles = %.0f", combinacionesPosibles);
  printf("\n");//separar lineas

  // combianciones posibles de intervalo
  for (int i = 0; i < combinacionesPosibles; i++)
  {
    printf("Combinacion numero: %d\n", i+1);
    
    //determinando par e impar (se observa el comportamiento "uno si, uno no") se puede simplificar?
    if ((ladoC % 2) == 0)
    {
      printf("numero par: ");
      q++;
    } else {
      printf("numero impar: ");
      p++;
    }
    
    //pintando en consola el numero compuesto de 3 cifras
    printf("%d %d %d\n", ladoA, ladoB, ladoC);
    
    // determinando cual de los numeros tiene que variar para seguir con la sucesion

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
  printf("\n\ncantidad de numeros pares:\t%d\n",q);
  printf("cantidad de numeros impares:\t%d\n",p);
  return 0;
}
