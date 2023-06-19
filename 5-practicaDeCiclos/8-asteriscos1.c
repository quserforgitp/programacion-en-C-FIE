#include <stdio.h>
#include <stdlib.h>

int main() {

  long long int y = 0, x = 0;
  scanf("%lld %lld", &y, &x);
  for (int i = 0; i < y; i++)
  {
    for (int j = 0; j < x; j++)
    {
      printf("*");
    }
    
    printf("\n");
  }
  printf("\n");
  

  return EXIT_SUCCESS;
}