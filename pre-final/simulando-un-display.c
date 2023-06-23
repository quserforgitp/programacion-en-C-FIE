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
meterElCero ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados,
            char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i == 0 || i == 4) matrizCuadrada[i][j] = caracter;// 1,5 fila
      else// 2,3,4 fila
        if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizCuadrada[i][j] = caracter; // 1,3 columna
         else matrizCuadrada[i][j] = ' '; // 2,4 columna
      if (j == (*espOcupados) + 3) matrizCuadrada[i][j] = ' ';
    }
  (*espOcupados) += 4;
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
meterElDos ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j =  (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizCuadrada[i][j] = caracter;//1,3,5 filas
       else // 2,4 filas
        if (i == 1) // fila 2
          if (j == (*espOcupados) + 2) matrizCuadrada[i][j] = caracter;// columna 3
           else matrizCuadrada[i][j] = ' ';// 1,2,4 columnas
        else // fila 4
          if (j == (*espOcupados)) matrizCuadrada[i][j] = caracter;// columna 1
           else matrizCuadrada[i][j] = ' ';// 2,3,4 columnas
      if (j == (*espOcupados) + 3) matrizCuadrada[i][j] = ' ';// columna 4 (siempre)
  }
  (*espOcupados) += 4;
}

void
meterElTres ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j =  (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizCuadrada[i][j] = caracter;//1,3,5 filas
       else // 2,4 filas
        if (i == 1) // fila 2
          if (j == (*espOcupados) + 2) matrizCuadrada[i][j] = caracter;// columna 3
           else matrizCuadrada[i][j] = ' ';// 1,2,4 columnas
        else // fila 4
          if (j == (*espOcupados + 2)) matrizCuadrada[i][j] = caracter;// columna 3
           else matrizCuadrada[i][j] = ' ';// 2,3,4 columnas
      if (j == (*espOcupados) + 3) matrizCuadrada[i][j] = ' ';// columna 4 (siempre)
  }
  (*espOcupados) += 4;
}

void
meterElCuatro ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  
  // for del 4
  for (size_t i = 0; i < FILAS; i++)
  {
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i == 0 || i == 1)// 1,2 filas
      {
        if (j == (*espOcupados) || j == (*espOcupados) + 2)// 1,3 columnas
        {
          matrizCuadrada[i][j] = caracter;
        } else
          {
            matrizCuadrada[i][j] = ' ';
          }        
      }
      else // filas 3,4,5
      {
        if (i == 2) // fila 3
        {
          matrizCuadrada[i][j] = caracter;
        }
        else// 4,5 filas
        {
          if (j == (*espOcupados) + 2) // 3er columna
          {
            matrizCuadrada[i][j] = caracter;
          }
          else// 1,2,4 columnas
          {
            matrizCuadrada[i][j] = ' ';
          }
        }
      }
    if (j == (*espOcupados) + 3)// siempre 4ta columna
    {
      matrizCuadrada[i][j] = ' ';
    }
    }
  }

  (*espOcupados) += 4;
}

void
meterElCinco ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j =  (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizCuadrada[i][j] = caracter;//1,3,5 filas
       else // 2,4 filas
        if (i == 1) // fila 2
          if (j == (*espOcupados)) matrizCuadrada[i][j] = caracter;// columna 3
           else matrizCuadrada[i][j] = ' ';// 2,3,4 columnas
        else // fila 4
          if (j == (*espOcupados + 2)) matrizCuadrada[i][j] = caracter;// columna 3
           else matrizCuadrada[i][j] = ' ';// 2,3,4 columnas
      if (j == (*espOcupados) + 3) matrizCuadrada[i][j] = ' ';// columna 4 (siempre)
  }
  (*espOcupados) += 4;
}

void
meterElSeis ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizCuadrada[i][j] = caracter; // 1,3,5 filas
      else // 2,4 filas
      {
        if (i == 1) // fila 2
        {
          if (j == (*espOcupados) ) matrizCuadrada[i][j] = caracter;// 1 columnas
            else matrizCuadrada[i][j] = ' '; // 2,3,4 columnas  
        } 
        else // fila 4
          {
            if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizCuadrada[i][j] = caracter;// 1,3 columnas
            else matrizCuadrada[i][j] = ' '; // 2,4 columnas
          }
      }
      if ( j == (*espOcupados) + 3 ) matrizCuadrada[i][j] = ' '; // siempre en la 4 columna
    }
    (*espOcupados) += 4;
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
          matrizCuadrada[i][j] = caracter;// pon el caracter
        }
      }
    }
  (*espOcupados) += 4;  
  rango = (*espOcupados) + 4;
}

void
meterElOcho ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizCuadrada[i][j] = caracter; // 1,3,5 filas
      else // 2,4 filas
      {
        if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizCuadrada[i][j] = caracter;// 1,3 columnas
        else matrizCuadrada[i][j] = ' '; // 2,4 columnas
      }
      if (j == (*espOcupados) + 3) matrizCuadrada[i][j] = ' '; // siempre en la 4 columna
    }
    (*espOcupados) += 4;
}

void
meterElNueve ( char matrizCuadrada[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizCuadrada[i][j] = caracter; // 1,3,5 filas
      else // 2,4 filas
      {
        if (i == 1) // fila 2
        {
          if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizCuadrada[i][j] = caracter;// 1,3 columnas
          else matrizCuadrada[i][j] = ' '; // 2,4 columnas  
        } else { // fila 4
          if (j == (*espOcupados) + 2) matrizCuadrada[i][j] = caracter;// 3a columna
          else matrizCuadrada[i][j] = ' '; // 1,2,4 columnas 
        }        
      }
      if (j == (*espOcupados) + 3) matrizCuadrada[i][j] = ' '; // siempre en la 4 columna
    }
    (*espOcupados) += 4;
}

void
pedirCaracter ( char *caracter )
{
  scanf("%c", caracter);
  puts("");
}

void
meterTodos ( char matrizCuadrada[FILAS][COLUMNAS], int *espOcupados, 
char caracter )
{
  meterElCero ( matrizCuadrada ,espOcupados,'#' );
  meterElUno ( matrizCuadrada ,espOcupados,'#' );
  meterElDos ( matrizCuadrada ,espOcupados,'#' );
  meterElTres ( matrizCuadrada ,espOcupados,'#' );
  meterElCuatro ( matrizCuadrada,espOcupados,'#' );
  meterElCinco ( matrizCuadrada,espOcupados,'#' );
  meterElSeis ( matrizCuadrada ,espOcupados,'#' );
  meterElSiete ( matrizCuadrada ,espOcupados,'#' );
  meterElOcho ( matrizCuadrada ,espOcupados,'#' );
  meterElNueve ( matrizCuadrada ,espOcupados,'#' );
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

  /* DEBUG */
  for (size_t i = 0; i < FILAS; i++)
  {
    for (size_t j = 0; j < 4; j++)
    {
      matrizCuadrada[i][j] = '0';
    }
  }
  //espOcupados += 4;

  meterTodos ( matrizCuadrada, &espOcupados,'#' );

  
  
  imprimirMatriz( matrizCuadrada,espOcupados );
  
  return EXIT_SUCCESS;
}
