#include <stdio.h>

int main() {
    float r = 0,
          suma5 = 0,
          alCuadrado = 0,
          divisionTercioR = 0,
          alCubo = 0;

    scanf("%f", &r);
    printf("%f ", r);

    suma5 = r + 5;
    printf("%f ", suma5);

    alCuadrado = suma5 * suma5;
    printf("%f ", alCuadrado);

    divisionTercioR = alCuadrado / (r / 3); 
    printf("%f ", divisionTercioR);

    alCubo = divisionTercioR * divisionTercioR * divisionTercioR;
    printf("%f ", alCubo);

    return 0;
}