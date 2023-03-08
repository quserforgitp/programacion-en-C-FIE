#include <stdio.h>

int main(int argc, char const *argv[])
{

  /**(A/B)+-C*/
  float A = 0,
      B = 0,
      C = 0,
      mas = 0,
      menos = 0;
  scanf("%f %f %f",&A,&B,&C);

  mas = (A / B) + C;
  menos = (A / B) - C;

  if (B == 0)
  {
    printf("indefinido");
  }
  else if( mas == menos)
  {
    printf("%f", mas);
  } else
  {
    printf("%f ",mas);
    printf("%f",menos);
  }
  
  
  return 0;
}
