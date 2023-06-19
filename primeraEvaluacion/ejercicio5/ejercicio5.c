#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int veces = 0,
      winsRey = 0,
      winsRay = 0,
      numeroEntrada;
  scanf("%d", &veces);

  for (int i = 0; i < veces; i++)
  {
    
    scanf("%d", &numeroEntrada);
    getchar();

    if ((numeroEntrada % 2) == 0)
    {
      winsRey++;
    } else {
      winsRay++;
    }
  }

  if (winsRey > winsRay)
  {
    printf("Rey gana %d a %d\n", winsRey, winsRay);
  } else if (winsRey == winsRay)
  {
    printf("Ray y Rey empataron a %d\n", winsRay);
  } else {
    printf("Ray gana %d a %d\n", winsRay, winsRey);
  }
  
  
  

  return 0;
}
