#include <stdio.h>
int main(int argc, char const *argv[])
{
  int A = 0, B = 0, C = 0;
  scanf("%d %d %d",&A, &B, &C);

  if (A == B && B == C) // TODOS SON IGUALES
  {
    printf("I\n");
  } else if (A <= B && B <= C)
  {
    printf("C\n");
  } else if (A >= B && B >= C)
  {
    printf("D\n");
  } else
  {
    printf("X\n");
  }
   
  return 0;
}
