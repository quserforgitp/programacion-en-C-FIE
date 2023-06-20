#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX 501

int
main ()
{
  char cadena[MAX];
  fgets( cadena, sizeof(cadena), stdin );
  cadena[strcspn(cadena,"\n")] = '\0';

  int contadorA = 0,
      contadorE = 0,
      contadorI = 0,
      contadorO = 0,
      contadorU = 0;

  for (int i = 0; cadena[i] != '\0'; i++)
  {
    char caracter = tolower(cadena[i]);
    switch (caracter)
    {
      case 'a':
        contadorA++;
        break;
      case 'e':
        contadorE++;
        break;
      case 'i':
        contadorI++;
        break;
      case 'o':
        contadorO++;
        break;
      case 'u':
        contadorU++;
        break;
      default:
        break;
    }
  }

  printf( "%d %d %d %d %d\n",contadorA,
          contadorE, contadorI,
          contadorO, contadorU 
        );

  return EXIT_SUCCESS;
}
