#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILAS 5
#define COLUMNAS 100
#define SALTAR_LINEA putchar ( '\n' ) ;
#define CONSUMIR_ENTER getchar () ;

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
meterElCero ( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados,
            char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i == 0 || i == 4) matrizDisplay[i][j] = caracter;// 1,5 fila
      else// 2,3,4 fila
        if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizDisplay[i][j] = caracter; // 1,3 columna
         else matrizDisplay[i][j] = ' '; // 2,4 columna
      if (j == (*espOcupados) + 3) matrizDisplay[i][j] = ' ';
    }
  (*espOcupados) += 4;
}

void
meterElUno( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados,
            char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < COLUMNAS; j++)
      if (j == (*espOcupados)) // poner caracteres cuando sea la misma columna
      {
        matrizDisplay[i][j] = caracter;
        matrizDisplay[i][j + 1] = ' '; // espacio para el siguiente caracter
      }
  (*espOcupados) += 2;  
}

void
meterElDos ( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j =  (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizDisplay[i][j] = caracter;//1,3,5 filas
       else // 2,4 filas
        if (i == 1) // fila 2
          if (j == (*espOcupados) + 2) matrizDisplay[i][j] = caracter;// columna 3
           else matrizDisplay[i][j] = ' ';// 1,2,4 columnas
        else // fila 4
          if (j == (*espOcupados)) matrizDisplay[i][j] = caracter;// columna 1
           else matrizDisplay[i][j] = ' ';// 2,3,4 columnas
      if (j == (*espOcupados) + 3) matrizDisplay[i][j] = ' ';// columna 4 (siempre)
  }
  (*espOcupados) += 4;
}

void
meterElTres ( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j =  (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizDisplay[i][j] = caracter;//1,3,5 filas
       else // 2,4 filas
        if (i == 1) // fila 2
          if (j == (*espOcupados) + 2) matrizDisplay[i][j] = caracter;// columna 3
           else matrizDisplay[i][j] = ' ';// 1,2,4 columnas
        else // fila 4
          if (j == (*espOcupados + 2)) matrizDisplay[i][j] = caracter;// columna 3
           else matrizDisplay[i][j] = ' ';// 2,3,4 columnas
      if (j == (*espOcupados) + 3) matrizDisplay[i][j] = ' ';// columna 4 (siempre)
  }
  (*espOcupados) += 4;
}

void
meterElCuatro ( char matrizDisplay[FILAS][COLUMNAS],
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
          matrizDisplay[i][j] = caracter;
        } else
          {
            matrizDisplay[i][j] = ' ';
          }        
      }
      else // filas 3,4,5
      {
        if (i == 2) // fila 3
        {
          matrizDisplay[i][j] = caracter;
        }
        else// 4,5 filas
        {
          if (j == (*espOcupados) + 2) // 3er columna
          {
            matrizDisplay[i][j] = caracter;
          }
          else// 1,2,4 columnas
          {
            matrizDisplay[i][j] = ' ';
          }
        }
      }
    if (j == (*espOcupados) + 3)// siempre 4ta columna
    {
      matrizDisplay[i][j] = ' ';
    }
    }
  }

  (*espOcupados) += 4;
}

void
meterElCinco ( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j =  (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizDisplay[i][j] = caracter;//1,3,5 filas
       else // 2,4 filas
        if (i == 1) // fila 2
          if (j == (*espOcupados)) matrizDisplay[i][j] = caracter;// columna 3
           else matrizDisplay[i][j] = ' ';// 2,3,4 columnas
        else // fila 4
          if (j == (*espOcupados + 2)) matrizDisplay[i][j] = caracter;// columna 3
           else matrizDisplay[i][j] = ' ';// 2,3,4 columnas
      if (j == (*espOcupados) + 3) matrizDisplay[i][j] = ' ';// columna 4 (siempre)
  }
  (*espOcupados) += 4;
}

void
meterElSeis ( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizDisplay[i][j] = caracter; // 1,3,5 filas
      else // 2,4 filas
      {
        if (i == 1) // fila 2
        {
          if (j == (*espOcupados) ) matrizDisplay[i][j] = caracter;// 1 columnas
            else matrizDisplay[i][j] = ' '; // 2,3,4 columnas  
        } 
        else // fila 4
          {
            if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizDisplay[i][j] = caracter;// 1,3 columnas
            else matrizDisplay[i][j] = ' '; // 2,4 columnas
          }
      }
      if ( j == (*espOcupados) + 3 ) matrizDisplay[i][j] = ' '; // siempre en la 4 columna
    }
    (*espOcupados) += 4;
}

void
meterElSiete( char matrizDisplay[FILAS][COLUMNAS],
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
        matrizDisplay[i][j] = caracter; // rellena 7's
        if (j == rango - 1)// si estamos en la ultima columna
        {
          matrizDisplay[i][j] = ' '; // pon un espacio 
        }
        
      } else // si no estamos en la primera fila
      {
        matrizDisplay[i][j] = ' '; // rellena con espacios
        if (j == rango - 2) // cuando estamos en la penultima columna
        {
          matrizDisplay[i][j] = caracter;// pon el caracter
        }
      }
    }
  (*espOcupados) += 4;  
  rango = (*espOcupados) + 4;
}

void
meterElOcho ( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizDisplay[i][j] = caracter; // 1,3,5 filas
      else // 2,4 filas
      {
        if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizDisplay[i][j] = caracter;// 1,3 columnas
        else matrizDisplay[i][j] = ' '; // 2,4 columnas
      }
      if (j == (*espOcupados) + 3) matrizDisplay[i][j] = ' '; // siempre en la 4 columna
    }
    (*espOcupados) += 4;
}

void
meterElNueve ( char matrizDisplay[FILAS][COLUMNAS],
            int *espOcupados, char caracter )
{
  for (size_t i = 0; i < FILAS; i++)
    for (size_t j = (*espOcupados); j < (*espOcupados) + 4; j++)
    {
      if (i%2 == 0) matrizDisplay[i][j] = caracter; // 1,3,5 filas
      else // 2,4 filas
      {
        if (i == 1) // fila 2
        {
          if (j == (*espOcupados) || j == (*espOcupados) + 2) matrizDisplay[i][j] = caracter;// 1,3 columnas
          else matrizDisplay[i][j] = ' '; // 2,4 columnas  
        } else { // fila 4
          if (j == (*espOcupados) + 2) matrizDisplay[i][j] = caracter;// 3a columna
          else matrizDisplay[i][j] = ' '; // 1,2,4 columnas 
        }        
      }
      if (j == (*espOcupados) + 3) matrizDisplay[i][j] = ' '; // siempre en la 4 columna
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
meterTodos ( char matrizDisplay[FILAS][COLUMNAS], int *espOcupados, 
char caracter )
{
  meterElCero ( matrizDisplay ,espOcupados,caracter );
  meterElUno ( matrizDisplay ,espOcupados,caracter );
  meterElDos ( matrizDisplay ,espOcupados,caracter );
  meterElTres ( matrizDisplay ,espOcupados,caracter );
  meterElCuatro ( matrizDisplay,espOcupados,caracter );
  meterElCinco ( matrizDisplay,espOcupados,caracter );
  meterElSeis ( matrizDisplay ,espOcupados,caracter );
  meterElSiete ( matrizDisplay ,espOcupados,caracter );
  meterElOcho ( matrizDisplay ,espOcupados,caracter );
  meterElNueve ( matrizDisplay ,espOcupados,caracter );
}

/* DRIVER */
int
main ()
{
  char matrizDisplay[FILAS][COLUMNAS] = {0};
  int espOcupados = 0;
  char caracter = 0;
  char numeros[20] = {0};

  /* ENTRADA ej -> 1234 #*/
  scanf("%s", numeros); CONSUMIR_ENTER
  scanf("%c", &caracter); CONSUMIR_ENTER

  /* PROCESAMIENTO DE DATOS */
  // recorre la matriz de numeros
  for (int i = 0; i < strlen(numeros); i++)
   switch ( numeros[i] ) // mete en el display el numero que encuentre
   {
   case '0':
      meterElCero( matrizDisplay,&espOcupados,caracter );
    break;
    case '1':
      meterElUno( matrizDisplay,&espOcupados,caracter );
    break;
    case '2':
      meterElDos( matrizDisplay,&espOcupados,caracter );
    break;
    case '3':
      meterElTres( matrizDisplay,&espOcupados,caracter );
    break;
    case '4':
      meterElCuatro( matrizDisplay,&espOcupados,caracter );
    break;
    case '5':
      meterElCinco( matrizDisplay,&espOcupados,caracter );
    break;
    case '6':
      meterElSeis( matrizDisplay,&espOcupados,caracter );
    break;
    case '7':
      meterElSiete( matrizDisplay,&espOcupados,caracter );
    break;
    case '8':
      meterElOcho( matrizDisplay,&espOcupados,caracter );
    break;
    case '9':
      meterElNueve( matrizDisplay,&espOcupados,caracter );
    break;
   
   default:
      fprintf( stderr," '%c' no es un numero\n",numeros[i] );
      return EXIT_FAILURE;
    break;
   }


  /* SALIDA */
  SALTAR_LINEA ; imprimirMatriz( matrizDisplay,espOcupados );
  
  return EXIT_SUCCESS;
}
