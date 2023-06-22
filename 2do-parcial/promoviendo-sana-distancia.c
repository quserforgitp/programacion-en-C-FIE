#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100000

/* PROTOTIPOS */
bool
compstrs( char matriz1[20], char matriz2[20], int cantTelefonos )
{
  puts("desde funcion");
  printf("%s\n", matriz1);
  printf("%s\n", matriz2);
}

int
main () 
{
  int cantTelefonos = 0;

  puts("introduce la cantidad de telefonos");
  scanf("%d", &cantTelefonos);
  getchar(); // consumir \n
  char telefono[20];
  char matriz[cantTelefonos][20];

  //RELLENAR MATRIZ
  for (size_t i = 0; i < cantTelefonos; i++)
  {
    for (size_t j = 0; j < 20; j++)
    {
      matriz[i][j] = '\0';
    } 
  }  
  
  // METER TELEFONOS
  for (size_t i = 0; i < cantTelefonos; i++)
  {
    fgets(telefono,20,stdin);
    telefono[strcspn(telefono,"\n")] = '\0';
    strcpy(matriz[i],telefono);
  }

  int indexMasFrecuente = 0;
  int frecuencia = 0;
  int matrizFrecuencias[cantTelefonos][20]; 
  // RELLENAR MATRIZ FRECUENCIAS
  for (size_t i = 0; i < cantTelefonos; i++)
  {
    for (size_t j = 0; j < cantTelefonos; j++)
    {
      for (size_t j = 0; j < 20; j++)
      {
        matrizFrecuencias[i][j] = 0;
      }
    } 
  }

  // HALLAR EL MAS REPETIDO
  for (int i = 0; i < cantTelefonos; i++)
  {
    for (int j = 0; j < cantTelefonos; j++)
    {
      compstrs(matriz[i],matriz[j],cantTelefonos);
    }
    
  }



  puts("\t\tIMPRIMIENDO MATRIZ");

  //IMPRIMIR MATRIZ
  for (size_t i = 0; i < cantTelefonos; i++)
  {
    for (size_t j = 0; j < 20; j++)
    {
      printf("%c", matriz[i][j]);
    } 
    puts("");
  }  
  
  return EXIT_SUCCESS;
}