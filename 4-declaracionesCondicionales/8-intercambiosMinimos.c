#include <stdio.h>

int main(int argc, char const *argv[]) {
    int A = 0,
        B = 0,
        C = 0,
        cambios = 0;
    
    scanf("%d %d %d", &A, &B, &C);
    
    // son 6 casos posibles
    // cuando A es menor (2 casos)
    if (A < B && B < C) // A < B < C
    {
      printf("%d",0);
    }
    if (A < C && C < B) // A < C < B
    {
      printf("%d",1);
    }
    
    // cuando B es menor (2 casos)
    if (B < A && A < C) // B < A < C
    {
      printf("%d",1);
    }
    if (B < C && C < A) // B < C < A
    {
      printf("%d",2);
    }

    // cuando C es menor (2 casos)
    if (C < A && A < B) // C < A < B
    {
      printf("%d",2);
    }
    if (C < B && B < A) // C < B < A
    {
      printf("%d",1);
    }
    // SE QUE NO ES OPTIMO DEJAR que el programa corrobore todos los
    // casos pero el mismo es corto y por lo tanto no afecta demasiado
    return 0;
}

