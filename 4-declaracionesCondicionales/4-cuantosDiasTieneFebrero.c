#include <stdio.h>

int main(int argc, char const *argv[])
{
  // el año bisiesto (febrero con 29 dias) ocurre cada 4 años
    // un año es bisiesto cuando:
  /**
   * Es divisible por 4 y no por 10
   * o si es divisible por 4, 100 y por 400
  */
  int a1 = 0,
      a2 = 0,
      a3 = 0,
      a4 = 0,
      a1esDivisiblePorCuatro = 0,
      a1esDivisiblePorCien = 0,
      a1esDivisiblePorCuatroCientos = 0,
      a2esDivisiblePorCuatro = 0,
      a2esDivisiblePorCien = 0,
      a2esDivisiblePorCuatroCientos = 0,
      a3esDivisiblePorCuatro = 0,
      a3esDivisiblePorCien = 0,
      a3esDivisiblePorCuatroCientos = 0,
      a4esDivisiblePorCuatro = 0,
      a4esDivisiblePorCien = 0,
      a4esDivisiblePorCuatroCientos = 0;

  scanf("%d %d %d %d", &a1,&a2,&a3,&a4);

  // valores de verdad para cada condicion de a1
  a1esDivisiblePorCuatro = (a1 % 4) == 0;
  a1esDivisiblePorCien = (a1 % 100) == 0;
  a1esDivisiblePorCuatroCientos = (a1 % 400) == 0;

  // condicional para el primer año
  if ( (a1esDivisiblePorCuatro && !a1esDivisiblePorCien) ||
       (a1esDivisiblePorCuatro && a1esDivisiblePorCien && a1esDivisiblePorCuatroCientos) )
  {
    printf("%d ", 29);
  } else {
    printf("%d ", 28);
  }

  // valores de verdad para cada condicion de a2
  a2esDivisiblePorCuatro = (a2 % 4) == 0;
  a2esDivisiblePorCien = (a2 % 100) == 0;
  a2esDivisiblePorCuatroCientos = (a2 % 400) == 0;

  // condicional para el primer año
  if ( (a2esDivisiblePorCuatro && !a2esDivisiblePorCien) ||
       (a2esDivisiblePorCuatro && a2esDivisiblePorCien && a2esDivisiblePorCuatroCientos) )
  {
    printf("%d ", 29);
  } else {
    printf("%d ", 28);
  }

  // valores de verdad para cada condicion de a3
  a3esDivisiblePorCuatro = (a3 % 4) == 0;
  a3esDivisiblePorCien = (a3 % 100) == 0;
  a3esDivisiblePorCuatroCientos = (a3 % 400) == 0;

  // condicional para el primer año
  if ( (a3esDivisiblePorCuatro && !a3esDivisiblePorCien) ||
       (a3esDivisiblePorCuatro && a3esDivisiblePorCien && a3esDivisiblePorCuatroCientos) )
  {
    printf("%d ", 29);
  } else {
    printf("%d ", 28);
  }

  // valores de verdad para cada condicion de a4
  a4esDivisiblePorCuatro = (a4 % 4) == 0;
  a4esDivisiblePorCien = (a4 % 100) == 0;
  a4esDivisiblePorCuatroCientos = (a4 % 400) == 0;

  // condicional para el primer año
  if ( (a4esDivisiblePorCuatro && !a4esDivisiblePorCien) ||
       (a4esDivisiblePorCuatro && a4esDivisiblePorCien && a4esDivisiblePorCuatroCientos) )
  {
    printf("%d ", 29);
  } else {
    printf("%d ", 28);
  }
  
  return 0;
}
