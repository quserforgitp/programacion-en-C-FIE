#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1000001

bool esConsonante(char letra);

int
contarOcurrencias( const char* cadena,
                   const char* palabra );

void
minionGame( const char* cadena );

/* INICIA EL PROGRAMA */
int
main ()
{
    char cadena[MAX];
    scanf("%s", cadena);

    minionGame(cadena);

    return 0;
}

bool
esConsonante( char letra )
{
  return (letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U');
}

int
contarOcurrencias( const char* cadena, const char* palabra )
{
  int contador = 0;
  const char* posicion = cadena;
  while ((posicion = strstr(posicion, palabra)) != NULL) {
    contador++;
    posicion++;
  }
  return contador;
}

void
minionGame ( const char* cadena )
{
  int puntajeJugador1 = 0;
  int puntajeJugador2 = 0;

  int longitud = strlen(cadena);

  for (int i = 0; i < longitud; i++) {
    if (esConsonante(cadena[i])) {
      puntajeJugador1 += longitud - i;
    } else {
        puntajeJugador2 += longitud - i;
    }
  }

  if (puntajeJugador1 > puntajeJugador2) {
      printf("STUART %d\n", puntajeJugador1);
  } else if (puntajeJugador1 < puntajeJugador2) {
      printf("KEVIN %d\n", puntajeJugador2);
  } else {
      printf("EMPATE\n");
  }
}