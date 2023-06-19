#include <stdio.h>
int main(int argc, char const *argv[])
{
  long int n = 0;
  scanf("%ld", &n);

  n = n % 10;

  printf("%ld\n", n);

  return 0;
}
