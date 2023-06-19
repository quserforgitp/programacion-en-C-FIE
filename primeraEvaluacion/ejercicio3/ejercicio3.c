#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  long int size = 0,
      n = 0;
  
  scanf("%ld",&n);
  size = 2*n - 1;

  for (int y = 0; y < size ; y++)
  {
    for (int x = 0; x < size; x++)
    {
      if (x == 0 || y == size - 1 || x == size - 1 || y == 0)
      {
     printf("%ld ",n);
      } else if(x == 1 || y == 3 || x == 3 || y == 1) {
        printf("%ld ",n-1);
      } else if(x == y){
        printf("%d ", 1);
      }
      
    }
    printf("\n");
  }
  
  return EXIT_SUCCESS;
}
