#include <stdio.h>
#include <limits.h> // Para usar INT_MIN y INT_MAX

int main() {
    int N, M; // Dimensiones: N filas, M columnas
    long long sum_total = 0; // Suma de todos los elementos (usamos long long por seguridad)
    int max_value = INT_MIN; // Inicializamos el máximo con el valor entero más pequeño posible
    int min_value = INT_MAX; // Inicializamos el mínimo con el valor entero más grande posible
    int total_elementos; // Total de elementos (N * M)
    
    int i, j; 
    int elemento; 
    double media_total = 0.0;
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
    int matriz[N][M];
    total_elementos = N * M;

    printf("\n--- Lectura de la Matriz %d x %d ---\n", N, M);
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Ingrese el elemento en la posicion [%d][%d]: ", i, j);
            if (scanf("%d", &elemento) != 1) {
                printf("Error: Entrada de elemento no valida.\n");
                return 1;
            }
            matriz[i][j] = elemento;
            sum_total += elemento;
            if (elemento > max_value) {
                max_value = elemento;
            }
            if (elemento < min_value) {
                min_value = elemento;
            }
        }
    }
    if (total_elementos > 0) {
        media_total = (double)sum_total / total_elementos;
    }
    printf("\n--- Resultados de la Matriz ---\n");
    printf("El valor **maximo** de toda la matriz es: **%d**\n", max_value);
    printf("El valor **minimo** de toda la matriz es: **%d**\n", min_value);
    printf("La **media** de todos los %d elementos es: **%.2f**\n", total_elementos, media_total);

    return 0;
}
