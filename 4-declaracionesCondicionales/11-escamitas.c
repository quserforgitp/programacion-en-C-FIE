#include <stdio.h>

int main(int argc, char const *argv[])
{
  int T = 0;
  // fria < 21  29> caliente
  // frio >= 15 -> vivo -> frio < 15 -> muerto
  // caliente <= 34 -> vivo -> caliente < 29 muerto
scanf("%d",&T);

if (( (T < 15) && (T < 21) ))
{
  printf("fria! ");
  printf("RIP escamitas :(");
} else if ((T < 21 && T >= 15))
{
  printf("fria! ");
} else if ( (T >= 21 && T <=29) )
{
  printf("tibia ");
} else if ((T > 29 && T > 34))
{
  printf("caliente! ");
  printf("RIP escamitas :(");
} else {
  printf("caliente! ");
}
  return 0;
}
