#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 0,
      b = 0,
      c = 0,
      d = 0;
  
  // combinaciones posibles ==> numeroDeVariables! (el factorial del 
  // numero de variables) 
  // numero de variables = 4 => 4! = 4X3X2X1 = 24
  // 6 casos para los que cada variable es menor (6 a, 6 b, 6c, 6d)

  // recibiendo entrada de 4 numeros enteros
  scanf("%d %d %d %d", &a, &b, &c, &d);


  /*      CONDICIONALES PARA a      */

  // cuando a es menor (6 casos)
  if (a<b && b<c && c<d) // 1 -> a,b,c,d
  {
    printf("%d %d %d %d",a,b,c,d);
  } else if (a<b && b<c && d<c) // 2 -> a,b,d,c
  {
    printf("%d %d %d %d",a,b,d,c);
  } else if (a<c && c<b && b<d) // 3 -> a,c,b,d
  {
    printf("%d %d %d %d",a,c,b,d);
  } else if (a<c && c<d && d<b) // 4 -> a,c,d,b
  {
    printf("%d %d %d %d",a,c,d,b);
  } else if(a<d && d<b && b<c) // 5 -> a,d,b,c
  {
    printf("%d %d %d %d",a,d,b,c);
  } else if(a<d && d<c && c<b) // 6 -> a,d,c,b
  {
    printf("%d %d %d %d",a,d,c,b);
  }



  /*      CONDICIONALES PARA b      */

  // cuando b es menor (6 casos)
  if (b<a && a<c && c<d) // 1 -> b,a,c,d
  {
    printf("%d %d %d %d",b,a,c,d);
  } else if (b<a && a<d && d<c) // 2 -> b,a,d,c
  {
    printf("%d %d %d %d",b,a,d,c);
  } else if (b<c && c<a && a<d) // 3 -> b,c,a,d
  {
    printf("%d %d %d %d",b,c,a,d);
  } else if (b<c && c<d && d<a) // 4 -> b,c,d,a
  {
    printf("%d %d %d %d",b,c,d,b);
  } else if(b<d && d<a && a<c) // 5 -> b,d,a,c
  {
    printf("%d %d %d %d",b,d,a,c);
  } else if(b<d && d<c && c<a) // 6 -> b,d,c,a
  {
    printf("%d %d %d %d",b,d,c,a);
  } 
  
  

  /*      CONDICIONALES PARA c      */

  // cuando c es menor (6 casos)
  if (c<a && a<b && b<d) // 1 -> c,a,b,d
  {
    printf("%d %d %d %d",c,a,b,c);
  } else if (c<a && a<d && d<c) // 2 -> c,a,d,c
  {
    printf("%d %d %d %d",c,a,d,c);
  } else if (c<b && b<a && a<d) // 3 -> c,b,a,d
  {
    printf("%d %d %d %d",c,b,a,d);
  } else if (c<b && b<d && d<a) // 4 -> c,b,d,a
  {
    printf("%d %d %d %d",c,b,d,a);
  } else if(c<d && d<a && a<b) // 5 -> c,d,a,b
  {
    printf("%d %d %d %d",c,d,a,c);
  } else if(c<d && d<b && b<a) // 6 -> c,d,b,a
  {
    printf("%d %d %d %d",c,d,b,a);
  }
  

    /*      CONDICIONALES PARA d      */

  // cuando d es menor (6 casos)
  if (d<a && a<b && b<c) // 1 -> d,a,b,c
  {
    printf("%d %d %d %d",d,a,b,c);
  } else if (d<a && a<c && c<b) // 2 -> d,a,c,b
  {
    printf("%d %d %d %d",d,a,d,d);
  } else if (d<b && b<a && a<c) // 3 -> d,b,a,c
  {
    printf("%d %d %d %d",d,b,a,c);
  } else if (d<b && b<c && c<a) // 4 -> d,b,c,a
  {
    printf("%d %d %d %d",d,b,c,a);
  } else if(d<c && c<a && a<b) // 5 -> d,c,a,b
  {
    printf("%d %d %d %d",d,c,a,b);
  } else if(d<c && c<b && b<a) // 6 -> d,c,b,a
  {
    printf("%d %d %d %d",d,c,b,a);
  }

  return 0;
}
