#include <stdio.h>
int main(int argc, char const *argv[])
{
  int N = 0, vecesNmodificado = 0, 
      NesPar = 0,
      NtieneAlMenosTresCifras = 0,
      NtieneDosCifras = 0,
      NesMultiploDeTres = 0;
  
  scanf("%d",&N);

  /******PRIMERA CUESTION******/
  NesPar = (N % 2) == 0;
  if (NesPar)
  {
    N /= 2;
    vecesNmodificado++;
  } else {
    N++;
    vecesNmodificado++;
  }

  /******SEGUNDA CUESTION******/
  NtieneAlMenosTresCifras = N >= 100;
  NtieneDosCifras = (N >= 10) && (N <= 99);   
  if (NtieneAlMenosTresCifras)
  {
    N /= 100;
    vecesNmodificado++;
  } else if (NtieneDosCifras)
  {
    N /= 10;
    vecesNmodificado++;
  }

  /******TERCERA CUESTION******/
  NesMultiploDeTres = (N % 3) == 0;
  if (NesMultiploDeTres)
  {
    N--;
    vecesNmodificado++;  
  }
  
  printf("%d %d\n", N, vecesNmodificado);
  
  return 0;
}
