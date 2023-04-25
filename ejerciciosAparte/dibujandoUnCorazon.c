#include <stdio.h>

int main(int argc, char const *argv[])
{

  char c = 0;
  scanf("%c",&c);


  int ctrl1 = 4,
      ctrl2 = 9,
      ctrl3 = 16,
      ctrl4 = 20;

  // CICLOS PARA LOS SEMICIRCULOS
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 23; j++)
    {
      if ((ctrl1<=j && j<=ctrl2) || (ctrl3<=j && j<=ctrl4) )
      {
        printf("%c",c);
      } else {
        printf(" ");
      }
      
    }
    if (i == 3) //coloca el ultimo asterisco
      {
        printf("%c",c);
      }
    printf("\n");
    ctrl1--;
    ctrl2++;
    ctrl3--;
    ctrl4++;
  }

  

  // CICLOS PARA EL TRIANGULO INVERTIDO
  ctrl1 = 23;
  ctrl2 = 0;
  for (int i = 0; i < 13; i++)
  {
    printf(" ");
    for (int j = 23; j > 0; j--)
    {      
      if (ctrl1>=j && ctrl2<j)
      {
        printf("%c",c);
      } else {
        printf(" ");
      }
    }
    ctrl1--;
    ctrl2++;
    printf("\n");
  }

  return 0;
}