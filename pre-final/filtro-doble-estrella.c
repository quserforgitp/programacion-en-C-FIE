#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


/* PROTOTIPOS */

bool
esBinario ( char caracter );

void 
aplicarFiltro ( char cadena[] );

void
mostrarString ( char cadena[]);

int
main ()
{
  char palabra[100] = {0};
  fgets(palabra,sizeof(palabra), stdin);
  palabra[strcspn(palabra, "\n")] = '\0';// eliminando salto de linea

  for (int i = 0; i < strlen(palabra); i++)
  {
    if (!(esBinario(palabra[i])))
    {
      aplicarFiltro(palabra);
      break;;
    }
  }
  mostrarString(palabra);
}

bool
esBinario ( char caracter )
{
  return (caracter == '0' || caracter == '1');
}

void 
aplicarFiltro ( char cadena[] )
{
  strcpy(cadena,"10101");
}

void mostrarString ( char cadena[] )
{
  // debug
  //puts("mostrando string");
  
  printf("%s", cadena);
  puts("");
  
  //debug
  //getchar();
}