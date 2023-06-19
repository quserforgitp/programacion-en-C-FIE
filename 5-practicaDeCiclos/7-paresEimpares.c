#include <stdio.h>
#include <stdlib.h>

int main() {
  long long int iteraciones = 0, nPares = 0, nImpares = 0, N = 0;
  scanf("%lld", &iteraciones);
  getchar(); // controlar el enter que queda en el buffer
  for (int i = 0; i < iteraciones; i++)
  {
    scanf("%lld", &N);

    if ((N % 2) == 0)
    {
      nPares++;
    } else {
      nImpares++;
    }
    
  }
  printf("%lld %lld\n", nPares, nImpares);
  
  return EXIT_SUCCESS;
}