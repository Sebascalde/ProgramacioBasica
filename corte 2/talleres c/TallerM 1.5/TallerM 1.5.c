#include <stdio.h>
#include <limits.h> 

int main() {
    int N; 
    int i, j; 
    int max_fila; 
    int elemento; 
    printf("Ingrese la dimension de la matriz cuadrada (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: Entrada de dimension no valida.\n");
        return 1;
    }
    int matriz[N][N];
    int vector_maximos[N];

    printf("\n--- Lectura de la Matriz %d x %d ---\n", N, N);
    for (i = 0; i < N; i++) {
        max_fila = INT_MIN; 
        
        printf("\nFila %d:\n", i);
        
        for (j = 0; j < N; j++) {
            printf("  Ingrese el elemento en la posicion [%d][%d]: ", i, j);
            if (scanf("%d", &elemento) != 1) {
                printf("Error: Entrada de elemento no valida.\n");
                return 1;
            }
            matriz[i][j] = elemento;
            if (elemento > max_fila) {
                max_fila = elemento;
            }
        }
        vector_maximos[i] = max_fila;
    }
    printf("\n--- Resultados ---\n");
    printf("\nMatriz ingresada:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nVector de maximos: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vector_maximos[i]);
    }
    printf("\n");

    return 0;
}
