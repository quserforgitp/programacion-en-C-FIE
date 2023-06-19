#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* PROTOTIPOS */
int contarCaracteres(char const *cadena);

int main() {
  char *cadenaTexto = NULL;
  size_t longitud = 0;

  printf("Dame una cadena de texto: ");
  getline(&cadenaTexto, &longitud, stdin);

  printf("La cadena tiene %d caracteres ", contarCaracteres(cadenaTexto));

  free(cadenaTexto);
  return EXIT_SUCCESS;
}

/* DEFINICIONES */
int contarCaracteres(char const *cadena) 
{
  int longitud = 0;
  for (; cadena[longitud] != '\0' ; longitud++);

  return longitud;
}
