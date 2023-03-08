#include <stdio.h>
int main(int argc, char const *argv[])
{
  int n = 0, suma = 0;
  
  do {
    scanf("%d",&n);
    getchar();
    suma += n;
  } while (n != 0);
  
  printf("%d\n", suma); 
  
  return 0;
}
