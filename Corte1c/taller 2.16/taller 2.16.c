#include <stdio.h>

int main() {
    int N, M;
    int pares_impresos = 0;
    int numero_actual;
    printf("--- Búsqueda de Tres Números Pares ---\n");
    printf("Introduce el valor de N (inicio del rango): ");
    if (scanf("%d", &N) != 1) {
        printf("Error de entrada para N.\n");
        return 1;
    }
    
    printf("Introduce el valor de M (fin del rango): ");
    
    if (scanf("%d", &M) != 1) {
        printf("Error de entrada para M.\n");
        return 1;
    }
    if (N > M) {
        printf("\nError: El primer número (N = %d) no puede ser mayor que el segundo (M = %d).\n", N, M);
        return 1;
    }

    printf("\n--- Primeros 3 Pares en [%d, %d] ---\n", N, M);
    numero_actual = N;
    if (N % 2 != 0) {
        numero_actual = N + 1;
    }
    while (pares_impresos < 3 && numero_actual <= M) {
        printf("Par encontrado: %d\n", numero_actual);
        pares_impresos++;
        numero_actual += 2; 
    }
    if (pares_impresos < 3) {
        printf("\nResultado: No se encontraron tres números pares entre los valores ingresados.\n");
        printf("Solo se lograron encontrar %d pares.\n", pares_impresos);
    } else {
        printf("\nResultado: Se encontraron los tres primeros números pares.\n");
    }

    return 0;
}
