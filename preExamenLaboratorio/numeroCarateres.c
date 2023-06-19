#include <stdio.h>
#include <stdlib.h>

/* PROTOTIPOS */
int contarCaracteres(char const *cadena);

int main() {
  char cadenaTexto[100];
  printf("dame una cadena de texto: ");
  fgets(cadenaTexto,100,stdin);
  printf("la cadena tiene %d caracteres ", contarCaracteres(cadenaTexto));
  return EXIT_SUCCESS;
}

/* DEFINICIONES */

int contarCaracteres(char const *cadena) 
{
  int longitud = 0;
  for (; cadena[longitud] != '\0' ; longitud++);

  return longitud - 1;  
}