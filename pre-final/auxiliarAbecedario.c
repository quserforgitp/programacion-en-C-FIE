#include <stdio.h>
#include <ctype.h>

int
main () 
{
  char letra = 0;

  puts("Dame la letra en la que quieres me me detenga:");
  scanf("%c", &letra);
  
  (islower(letra)) ? letra -= 32 : letra; 
  
  int contador = 1;
  for (size_t i = 65; i < letra; i++)
    contador++;

  printf("Son %d letras\n", contador);  

  return 0;
}