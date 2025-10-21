#include <stdio.h>

int main() {
    int N, M;
    int pares_impresos = 0;
    int numero_actual;

    // 1. Solicitar los dos números al usuario
    printf("--- Búsqueda de Tres Números Pares ---\n");
    printf("Introduce el valor de N (inicio del rango): ");
    
    // Verificación de lectura
    if (scanf("%d", &N) != 1) {
        printf("Error de entrada para N.\n");
        return 1;
    }
    
    printf("Introduce el valor de M (fin del rango): ");
    
    if (scanf("%d", &M) != 1) {
        printf("Error de entrada para M.\n");
        return 1;
    }

    // 2. Validar que N no sea mayor que M
    if (N > M) {
        printf("\nError: El primer número (N = %d) no puede ser mayor que el segundo (M = %d).\n", N, M);
        return 1;
    }

    printf("\n--- Primeros 3 Pares en [%d, %d] ---\n", N, M);

    // 3. Establecer el punto de inicio (asegurando que sea el primer número par >= N)
    numero_actual = N;

    // Si N es impar, avanzamos a N+1 (el primer par)
    if (N % 2 != 0) {
        numero_actual = N + 1;
    }

    // 4. Usar un bucle while para buscar los 3 pares
    // El bucle se ejecuta mientras no hayamos encontrado 3 pares Y no hayamos superado M
    while (pares_impresos < 3 && numero_actual <= M) {
        
        // El número actual ya es par (o fue ajustado para serlo)
        printf("Par encontrado: %d\n", numero_actual);
        pares_impresos++; // Contamos el par impreso
        
        // Saltamos directamente al siguiente número par (+2)
        numero_actual += 2; 
    }

    // 5. Mostrar el mensaje final
    if (pares_impresos < 3) {
        printf("\nResultado: No se encontraron tres números pares entre los valores ingresados.\n");
        printf("Solo se lograron encontrar %d pares.\n", pares_impresos);
    } else {
        printf("\nResultado: Se encontraron los tres primeros números pares.\n");
    }

    return 0;
}
