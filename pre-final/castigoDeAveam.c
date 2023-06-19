#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int
main ()
{
  int filas, columnas;
  scanf("%d %d", &filas, &columnas);

  int matrizInput[filas][columnas];

  // rellenar matrizInput input
  for (int i = 0; i < filas; i++)
    for (int j = 0; j < columnas; j++)
      scanf("%d", &matrizInput[i][j]);

  
  int arrFrecuencias[MAX] = {0};
  
  for (int i = 0; i < filas; i++) 
    for (int j = 0; j < columnas; j++)
      arrFrecuencias[matrizInput[i][j]]++;// necesitamos una matriz 

  for (int i = 0; i < MAX; i++)
    if (arrFrecuencias[i] > 0)// solo los que aparecen
      printf("%d ", arrFrecuencias[i]);

  puts("");// salto de linea

  return EXIT_SUCCESS;
}