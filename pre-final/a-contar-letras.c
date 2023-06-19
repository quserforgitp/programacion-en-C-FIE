#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

/* PROTOTIPOS DE FUNCIONES */
int
contarLetras ( char frase[] );

/* INICIO DEL PROGRAMA */
int
main () 
{

  char frase[MAX];
  fgets(frase,MAX-1,stdin);
  printf("%d", contarLetras(frase));
  return EXIT_SUCCESS;
}

int
contarLetras ( char frase[] )
{
  int contador = 0,
      esMinuscula = 0, 
      esMayuscula = 0;

  for (size_t i = 0; frase[i] != '\0'; i++)
  {
    esMayuscula = (frase[i] >= 65 && frase[i] <= 90) ? 1 : 0 ;
    esMinuscula = (frase[i] >= 97 && frase[i] <= 122) ? 1 : 0;

    if (esMayuscula || esMinuscula)
      contador++;
  }

  return contador;
}