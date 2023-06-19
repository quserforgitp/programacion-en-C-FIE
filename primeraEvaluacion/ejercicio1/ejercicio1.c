#include <stdio.h>

#define ANIO_ACTUAL 2017

int main(int argc, char const *argv[])
{
  long int anioNacimiento = 0;

  scanf("%ld", &anioNacimiento);

  printf("%ld\n", ANIO_ACTUAL - anioNacimiento);

  return 0;
}
