#include <stdio.h>

int main() {
    int N, M; 
    int i, j;
    printf("Ingrese el numero de filas (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: Entrada de filas no valida.\n");
        return 1;
    }

    printf("Ingrese el numero de columnas (M): ");
    if (scanf("%d", &M) != 1 || M <= 0) {
        printf("Error: Entrada de columnas no valida.\n");
        return 1;
    }
    float matriz[N][M];
    float sumas_filas[N]; 
    float sumas_columnas[M]; 
    
    for (i = 0; i < N; i++) {
        sumas_filas[i] = 0.0;
    }
    for (i = 0; i < M; i++) {
        sumas_columnas[i] = 0.0;
    }

    printf("\n--- Lectura de la Matriz de %d x %d (Reales) ---\n", N, M);
    for (i = 0; i < N; i++) { 
        printf("\nFila %d:\n", i);
        for (j = 0; j < M; j++) { 
            printf("  Ingrese el elemento en la posicion [%d][%d]: ", i, j);
            if (scanf("%f", &matriz[i][j]) != 1) {
                printf("Error: Entrada de elemento no valida.\n");
                return 1;
            }
            sumas_filas[i] += matriz[i][j];
        }
    }
    for (j = 0; j < M; j++) { 
        for (i = 0; i < N; i++) { 
            sumas_columnas[j] += matriz[i][j];
        }
    }
    printf("\n--- Matriz con Sumas ---\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%7.2f", matriz[i][j]); 
        }
        printf("  = %7.2f\n", sumas_filas[i]);
    }
    for (i = 0; i < M; i++) {
        printf("--------");
    }
    printf("-----------\n");
    for (j = 0; j < M; j++) {
        printf("%7.2f", sumas_columnas[j]);
    }
    printf("\n");

    return 0;
}
