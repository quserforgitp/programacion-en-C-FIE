#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FILAS 3
#define COLUMNAS 100

/* para el 0 */

int
main ()
{
  //3X3
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i == 0 || i == 2) // 1,3 filas
      {
        if (j == 3) // 4ta columna
        {
          printf(" ");
        }
        else // 1,2,3 columnas
        {
          printf("#");
        }
      }
      else // 2,3,4 filas
      {
        if (j == 0 || j == 2) // 1,3 columnas
        {
          printf("#");
        }
        else // 2da columna
        {
          printf(" ");
        }
      }
    }
    puts("");// siempre hay salto de linea al final  
  }
  puts("");

  //6X6
  for (int i = 0; i < 3 + 3; i++)
  {
    for (int j = 0; j < 4 + 3; j++)
    {
      if (i == 0 || i == 2 + 3) // 1,6 filas
      {
        if (j == 3 + 3) // 7va columna
        {
          printf(" ");
        }
        else // 1,2,3,4,5,6,7 columnas
        {
          printf("#");
        }
      }
      else // 2,3,4 filas
      {
        if (j == 0 || j == 2 + 3) // 1,6 columnas
        {
          printf("#");
        }
        else // 2,3,4,5,7 columna
        {
          printf(" ");
        }
      }
    }
    puts("");// siempre hay salto de linea al final  
  }
  puts("");

  //9X9
  for (int i = 0; i < 3 + 3 + 3; i++)
  {
    for (int j = 0; j < 4 + 3 + 3; j++)
    {
      if (i == 0 || i == 2 + 3 + 3) // 1,6 filas
      {
        if (j == 3 + 3 + 3) // 7va columna
        {
          printf(" ");
        }
        else // 1,2,3,4,5,6,7 columnas
        {
          printf("#");
        }
      }
      else // 2,3,4 filas
      {
        if (j == 0 || j == 2 + 3 + 3) // 1,6 columnas
        {
          printf("#");
        }
        else // 2,3,4,5,7 columna
        {
          printf(" ");
        }
      }
    }
    puts("");// siempre hay salto de linea al final  
  }
  puts("");

  return EXIT_SUCCESS;
}