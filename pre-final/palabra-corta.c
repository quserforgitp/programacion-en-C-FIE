#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 501

/* PROTOTIPOS */
bool
cmpPalabras(char palabra1[], char palabra2[]);

int
main ()
{
  unsigned int cantidadPalabras = 0;

  scanf("%u", &cantidadPalabras);
  getchar();// consumir salto de linea

  char palabras[cantidadPalabras][MAX];
  char palabra[MAX];
  char palabraMenor[MAX];

  // rellenar arreglo de palabras
  for (size_t i = 0; i < cantidadPalabras; i++)
  {
    fgets(palabras[i],MAX,stdin);
    palabras[i][strcspn(palabras[i],"\n")] = '\0';
  }
  strcpy(palabraMenor,palabras[0]);
  
  // desplegar palabras DEBUG
  /* for (size_t i = 0; i < cantidadPalabras; i++)
  {
    printf("%s\n", palabras[i]);
  } */

  // determinar palabra menor

  for (size_t i = 0; i < cantidadPalabras; i++)
  {
    strcpy(palabra,palabras[i]);

    if ( strlen(palabraMenor) > strlen(palabra) )
      strcpy(palabraMenor,palabra);
  }
  
  

  // determinar si es par la longitud de la cadena menor
  int longitud = strlen(palabraMenor);
  int longitudPar =
   (strlen(palabraMenor)% 2 == 0)
   ? 1 
   : 0;
  char stringParImpar[10] = "par";

  if (!longitudPar)
    strcpy(stringParImpar,"impar");
  
   
   
  // desplegar salida
  puts("");
  printf("%s\n%d\n%s\n", palabraMenor, longitud, stringParImpar);
   
  return EXIT_SUCCESS;
}