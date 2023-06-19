#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* PROTORIPOS DE FUNCIONES */
void sumar(int matrizA[][100], int matrizB[][100], int filasA, int columnasA, int filasB, int columnasB);
void restar(int matrizA[][100], int matrizB[][100], int filasA, int columnasA, int filasB, int columnasB);
void multiplicar(int matrizA[][100], int matrizB[][100], int filasA, int columnasA, int filasB, int columnasB);
void sacarTraspuesta(int matriz[][100], int filas, int columnas);
void imprimirMatriz(int matriz[][100], int filas, int columnas);

int main()
{
    int matrizA[100][100];
    int matrizB[100][100];
    int Ax, Ay, Bx, By;

    // Leer dimensiones de la matriz A
    scanf("%d %d", &Ax, &Ay);

    // Leer valores de la matriz A
    for (int i = 0; i < Ax; i++)
    {
        for (int j = 0; j < Ay; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Leer dimensiones de la matriz B
    scanf("%d %d", &Bx, &By);

    // Leer valores de la matriz B
    for (int i = 0; i < Bx; i++)
    {
        for (int j = 0; j < By; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Realizar operaciones según lo solicite el usuario
    char operacion[15];
    while (scanf("%s", operacion) == 1)
    {
        if (strcmp(operacion, "SUMA") == 0)
        {
            sumar(matrizA, matrizB, Ax, Ay, Bx, By);
        }
        else if (strcmp(operacion, "RESTA") == 0)
        {
            restar(matrizA, matrizB, Ax, Ay, Bx, By);
        }
        else if (strcmp(operacion, "MULTIPLICACION") == 0)
        {
            multiplicar(matrizA, matrizB, Ax, Ay, Bx, By);
        }
        else if (strcmp(operacion, "TRASPUESTA") == 0)
        {
            sacarTraspuesta(matrizA, Ax, Ay);
        }
        else if (strcmp(operacion, "SALIR") == 0)
        {
            break;
        }
    }

    return EXIT_SUCCESS;
}

void sumar(int matrizA[][100], int matrizB[][100], int filasA, int columnasA, int filasB, int columnasB)
{
    if (filasA == filasB && columnasA == columnasB)
    {
        int matrizResultado[100][100];

        for (int i = 0; i < filasA; i++)
        {
            for (int j = 0; j < columnasA; j++)
            {
                matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }

        imprimirMatriz(matrizResultado, filasA, columnasA);
    }
    else
    {
        printf("X\n");
    }
}

void restar(int matrizA[][100], int matrizB[][100], int filasA, int columnasA, int filasB, int columnasB)
{
    if (filasA == filasB && columnasA == columnasB)
    {
        int matrizResultado[100][100];

        for (int i = 0; i < filasA; i++)
        {
            for (int j = 0; j < columnasA; j++)
            {
                matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
            }
        }

        imprimirMatriz(matrizResultado, filasA, columnasA);
    }
    else
    {
        printf("X\n");
    }
}

void multiplicar(int matrizA[][100], int matrizB[][100], int filasA, int columnasA, int filasB, int columnasB)
{
    if (columnasA == filasB)
    {
        int matrizResultado[100][100];

        for (int i = 0; i < filasA; i++)
        {
            for (int j = 0; j < columnasB; j++)
            {
                matrizResultado[i][j] = 0;
                for (int k = 0; k < columnasA; k++)
                {
                    matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }

        imprimirMatriz(matrizResultado, filasA, columnasB);
    }
    else
    {
        printf("X\n");
    }
}

void sacarTraspuesta(int matriz[][100], int filas, int columnas)
{
    int matrizTraspuesta[100][100];

    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            matrizTraspuesta[i][j] = matriz[j][i];
        }
    }

    imprimirMatriz(matrizTraspuesta, columnas, filas);
}

void imprimirMatriz(int matriz[][100], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
