// https://stackoverflow.com/questions/12824134/undefined-reference-to-pow-in-c-despite-including-math-h
// https://stackoverflow.com/questions/1033898/why-do-you-have-to-link-the-math-library-in-c

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    float x1, y1, x2, y2, x3, y3, x4, y4;
    float d1, d2, d3, d4, min;

    // Lectura de coordenadas de vértices
    // printf("Ingrese las coordenadas de los cuatro vértices:\n");
    scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    // Cálculo de la longitud de cada lado
    d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    d3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    d4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

    // Determinar la longitud del lado más corto
    min = d1;
    if (d2 < min) {
        min = d2;
    }
    if (d3 < min) {
        min = d3;
    }
    if (d4 < min) {
        min = d4;
    }

    // Imprimir la longitud del lado más corto
    printf("%f\n", min);

    return 0;
}