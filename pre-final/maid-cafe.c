#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

void
encriptarMensaje( char mensaje[], char llave[], int espacios );

void
desencriptarMensaje ( char mensaje[], char llave[], int espacios );

int
main ()
{
  
  char llave[] = {"abcdefghijklmnopqrstuvwxyz 0123456789"};
  
  char msj[MAX];
  fgets(msj,MAX,stdin);
  msj[strcspn(msj,"\n")] = '\0';
  
  int espacios = 0;
  scanf("%d", &espacios);
  getchar(); //consumir enter
  
  desencriptarMensaje(msj,llave,espacios);
  printf("%s\n", msj);
  
  return EXIT_SUCCESS;
}

void
encriptarMensaje( char mensaje[], char llave[], int espacios )
{
  
  size_t msjLength = strlen(mensaje),
         llaveLength = strlen(llave);
  
  for (size_t i = 0; i < msjLength; i++)
    for (size_t j = 0; j < llaveLength; j++)
      if (mensaje[i] == llave[j])
      {
        mensaje[i] = llave[(j + espacios) % llaveLength];
        break;
      }
    }

void
desencriptarMensaje ( char mensaje[], char llave[], int espacios )
{
  int msjLength = strlen(mensaje),
         llaveLength = strlen(llave);

  int indice = 0;
  
  for (int i = 0; i < msjLength; i++)
    for (int j = 0; j < llaveLength; j++)
      if (mensaje[i] == llave[j])
      {
        indice = ((j - espacios) % llaveLength);

        if (indice < 0) indice += llaveLength;

        mensaje[i] = llave[ indice ];

        break;
      }
}