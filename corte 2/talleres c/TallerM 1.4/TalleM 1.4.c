#include <stdio.h>
#include <limits.h> // Para usar INT_MIN

int main() {
    int N;
    long long sum_maximos = 0;
    int i, j; 
    int max_fila; 
    int elemento;
    double media_maximos = 0.0;

    // 1. Lectura de la dimension N
    printf("Ingrese la dimension de la matriz cuadrada (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: Entrada de dimension no valida.\n");
        return 1;
    }
    int matriz[N][N];
    int maximos_por_fila[N];

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
        maximos_por_fila[i] = max_fila;
        sum_maximos += max_fila;
    }
    if (N > 0) {
        media_maximos = (double)sum_maximos / N;
    }
    printf("\n--- Resultados por Fila ---\n");
    printf("| Fila | Maximo |\n");
    printf("|------|--------|\n");
    for (i = 0; i < N; i++) {
        printf("|  %d   |   %d    |\n", i, maximos_por_fila[i]);
    }
    printf("---------------------------\n");

    printf("\n* La suma de los maximos de las filas es: **%lld**\n", sum_maximos);
    printf("* La **media de los maximos** es: **%.2f**\n", media_maximos);

    return 0;
}
