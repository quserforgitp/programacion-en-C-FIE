#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  long long int a = 1, b = 2, N = 0;

  scanf("%lld", &N);
  getchar();

  if (N >= 2)
  {
    printf("%lld ", a);
    printf("%lld ", b); 
  } else 
      return EXIT_FAILURE;

  for (; (a+=b) <= N ;)
  {
    printf("%lld ", a);
    if ((b += a) <= N)
    {
      printf("%lld ", b);    
    }
  } 
  
  return EXIT_SUCCESS;
}