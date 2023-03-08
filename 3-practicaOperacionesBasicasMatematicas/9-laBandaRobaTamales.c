#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tamalesLider = 0,
        tamales = 0,
        miembrosBanda = 0;

    scanf("%d %d", &tamales, &miembrosBanda); // para recibir T y B
    

    tamalesLider = tamales / 2 + tamales%2; // lider se queda con mitad y si es impar tambien con el sobrante
    tamales -= tamalesLider; // los tamales que quedan para repartir son el total menos los del lider
    tamales %= miembrosBanda - 1;// los miembros de la banda menos el jefe
    tamalesLider += tamales;
    printf("%d \n", tamalesLider);

    return 0;
}