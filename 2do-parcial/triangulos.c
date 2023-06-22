#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float
calcArea ( float a, float b, float c )
{
  float p = (a + b + c) / 2;
  float area = sqrt(p*(p - a)*(p - b)*(p-c));
  return area;
}


int
main ()
{
  int numTriangulos = 0;

  scanf("%d", &numTriangulos);

  float lados[numTriangulos][3];

  /* RELLENAR MATRIZ lados */

  float matrizAreas[numTriangulos];

  for (int i = 0; i < numTriangulos; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%f", &lados[i][j]);
    }
  }

  /* DEBUG */
  for (int i = 0; i < numTriangulos; i++)
  {
    printf("pintando triadas\n");
    for (int j = 0; j < 3; j += 3)
    {
      printf("%f %f %f\n", lados[i][j],lados[i][j+1], lados[i][j+2]);
      matrizAreas[i] = calcArea(lados[i][j],lados[i][j+1], lados[i][j+2]);
    }
  }
  

  /* IMPRIMIR MATRIZ LADOS */
  for (int i = 0; i < numTriangulos; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%.2f ", lados[i][j]);
    }
    puts("");
  }

  puts("IMPRIMIENDO AREAS");
  /* IMPRIMIR MATRIZ AREAS */
  for (int i = 0; i < numTriangulos; i++)
  {
    printf("%.2f ", matrizAreas[i]);  
  }

  puts("");
  

  return EXIT_SUCCESS;
}