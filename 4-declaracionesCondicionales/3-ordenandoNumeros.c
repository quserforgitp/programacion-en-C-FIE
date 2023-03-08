#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num1, num2, num3, num4;
    
    // recibiendo entrada de 4 numeros enteros
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    // Ordenar los números de menor a mayor utilizando condicionales
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num3 > num4) {
        int temp = num3;
        num3 = num4;
        num4 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // Mostrar los números ordenados de menor a mayor
    printf("%d %d %d %d\n", num1, num2, num3, num4);
    
    return 0;
}
