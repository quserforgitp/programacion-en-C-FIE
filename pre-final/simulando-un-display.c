#include <stdio.h>
#include <stdlib.h>

#define FILAS 5
#define COLUMNAS 100

void imprimirMatriz(char matriz[FILAS][COLUMNAS], int espOcupados)
{
  for (size_t i = 0; i < FILAS; i++)
  {
    for (size_t j = 0; j < espOcupados; j++)
      printf("%c", matriz[i][j]);
    puts("");
  }
}

void
meterElUno( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados,
            char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < COLUMNAS; j++)
      if (j == (*espOcupados)) // poner caracteres cuando sea la misma columna
      {
        matrizCuadrada[i][j] = caracter;
        matrizCuadrada[i][j + 1] = ' '; // espacio para el siguiente caracter
      }
  (*espOcupados) += 2;  
}

void
meterElSiete( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  int rango = 0;

  rango = (*espOcupados) + 4;
  /* METER EL 7 */
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {

      if (i == 0)// si estamos en la primera fila
      {
        matrizCuadrada[i][j] = caracter; // rellena 7's
        if (j == rango - 1)// si estamos en la ultima columna
        {
          matrizCuadrada[i][j] = ' '; // pon un espacio 
        }
        
      } else // si no estamos en la primera fila
      {
        matrizCuadrada[i][j] = ' '; // rellena con espacios
        if (j == rango - 2) // cuando estamos en la penultima columna
        {
          matrizCuadrada[i][j] = caracter; // pon un 7
        }
      }
    }
  (*espOcupados) += 4;  
  rango = (*espOcupados) + 4;
}

void
pedirCaracter ( char *caracter )
{
  scanf("%c", caracter);
  puts("");
}

/* DRIVER */
int
main ()
{
  char matrizCuadrada[FILAS][COLUMNAS] = {0};
  int espOcupados = 0;
  char caracter = 0;
  /* pedirCaracter( &caracter );
  meterElUno(matrizCuadrada,&espOcupados,caracter);  
  imprimirMatriz(matrizCuadrada, espOcupados); */

  

  int rango = 0;
  rango = espOcupados + 4;
  meterElSiete( matrizCuadrada,&espOcupados, '#');
  meterElSiete( matrizCuadrada,&espOcupados, '#');
  meterElUno( matrizCuadrada, &espOcupados, '#');
       
  espOcupados += 4; 
  rango = espOcupados + 4; // esto se declara dentro de la funcion
  imprimirMatriz( matrizCuadrada,espOcupados );
  

  return EXIT_SUCCESS;
}
