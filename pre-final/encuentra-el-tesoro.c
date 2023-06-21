#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 3


/* PROTOTIPOS */
bool
diagonalesIguales( const int matriz[MAX][MAX] );

void
rellenarMatrizCuadrada( int matrizCuadrada[MAX][MAX] );

/* void
desplegarMatriz ( const int matrizCuadrada[MAX][MAX] ); */


/* DRIVER */
int
main () 
{
  int matrizCuadrada[MAX][MAX];

  rellenarMatrizCuadrada(matrizCuadrada);

  if ( diagonalesIguales( matrizCuadrada ) )
    printf("Tesoro encontrado\n");
  else printf("Sigue buscando\n"); 

  return EXIT_SUCCESS;
}


/* DEFINICIONES */
bool
diagonalesIguales( const int matriz[MAX][MAX] )
{
  bool sonIguales = true;
  int numControl = matriz[0][0];

  for (size_t i = 0; i < MAX; i++)
  {
    for (size_t j = 0; j < MAX; j++)
    {
      if ( (i == j) || (i + j == MAX - 1 ) ) // cuando el indice pertenezca a una diagonal
      {
        if ( !(matriz[i][j] == numControl) ) // con que un numero sea diferente del numControl
          return !sonIguales;
      }
    }
  }
  return sonIguales;
}

void
rellenarMatrizCuadrada( int matrizCuadrada[MAX][MAX] )
{
  for (size_t i = 0; i < MAX; i++)
    for (size_t j = 0; j < MAX; j++)
      scanf( "%d", &matrizCuadrada[i][j] );
}

/* void
desplegarMatriz ( const int matrizCuadrada[MAX][MAX] )
{
  for (size_t i = 0; i < MAX; i++)
  {
    for (size_t j = 0; j < MAX; j++)
      printf("%5d ",matrizCuadrada[i][j]);
    puts("");
  }
} */