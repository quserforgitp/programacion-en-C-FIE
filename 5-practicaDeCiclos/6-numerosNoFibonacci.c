/* PA 40% */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  long long int a = 1, b = 2, N = 0;

  scanf("%lld", &N);
  getchar();
  
  for (; (b += a) <= N ;)
  {
    a = b - a;
    for (long long int i = a; i < b ; i++)
    {
      if((a < i))
        printf("%lld ", i);
    }
    
  }
return EXIT_SUCCESS;
}