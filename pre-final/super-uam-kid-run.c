/* no lo quizo el omegaup */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
main ()
{

  char cadena[101];

  //pedir cadena
  fgets(cadena,100,stdin);

  cadena[strcspn(cadena,"\n")] = '\0';// quitando caracter de salto de linea

  //contar espacios
  int espacios = 0;
  for (size_t i = 0; i < strlen(cadena); i++)
    if ( cadena[i] == ' ' ) espacios++;

  if ( espacios <= 0 ) // si hubo espacios
  {
    printf("%d\n", 0);
    return 0;
  }

  int residuo = 0;
  int saltosMinimos = 0;
  // si es multiplo de 5 no hace falta aumentar
  if (espacios % 5 == 0)
    {
      saltosMinimos = espacios / 5;
      printf("saltos = %d\n",saltosMinimos);
      return EXIT_SUCCESS;
    }

  // dividir espacios
  saltosMinimos = espacios / 5;
  saltosMinimos++;
  
  printf("%d\n",saltosMinimos);

  return EXIT_SUCCESS;
}