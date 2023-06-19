#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  long long int t = 0, r = 0 , f = 0, c = 0,
                aumento = 0, aumentoValido = false,
                fAux = 0, rAux = 0;
                
  scanf("%lld %lld %lld",&t , &r, &f);
  getchar();// capturar \n del buffer

  for (int i = 0; i < t; i++)
  {
    if (f <= r)
    {
      aumento++;
    }
    
    f += aumento;

    scanf("%lld", &c);// aumento al robot posicion
    getchar(); // capturar \n del buffer
    r += c;
  }  

  printf("%lld\n", aumento);
  return EXIT_SUCCESS;
}