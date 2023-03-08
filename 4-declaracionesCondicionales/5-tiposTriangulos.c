#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x = 0,
      y = 0,
      z = 0,
      losTresLadosSonIguales = 0,
      dosLadosSonIguales = 0;
      //ningunLadoEsIgual = 0;

  
  scanf("%d %d %d", &x, &y, &z);

  losTresLadosSonIguales = (x == y) && (y == z);
  dosLadosSonIguales = (x == y) || (x == z) || (y == z);
  //ningunLadoEsIgual = (x!=y && y!=z && x != z);

  if (losTresLadosSonIguales)
  {
    printf("equilatero");
  } else if (dosLadosSonIguales)
    {
      printf("isosceles");
    } else
      {
        printf("escaleno");
      }
  return 0;
}
// JAAAAAAAAAAAAA POR NO SABER ESCRIBIR NO MAAAAAA JAAAAAAAAAA
// jodezu como 3 hrs aqui revisando la logica JAAAAAAAAA