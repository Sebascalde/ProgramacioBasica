#include <stdio.h>

int main() {
    int N; // Dimension de la matriz N x N
    long long sum_pares = 0; // Suma de los números pares
    long long sum_impares = 0; // Suma de los números impares
    long long sum_pos_pares = 0; // Suma de números en posiciones (i+j) pares
    long long sum_pos_impares = 0; // Suma de números en posiciones (i+j) impares
    int count_pares = 0; // Contador de números pares
    int count_impares = 0; // Contador de números impares
    int count_pos_pares = 0; // Contador de posiciones (i+j) pares
    int count_pos_impares = 0; // Contador de posiciones (i+j) impares
    
    // Variables de control para los bucles, declaradas fuera del for
    int i, j; 
    
    // Variables para almacenar los elementos de la matriz
    int elemento; 
    double media_pares = 0.0;
    double media_impares = 0.0;
    double media_pos_pares = 0.0;
    double media_pos_impares = 0.0;
    printf("Ingrese la dimension de la matriz (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error: Entrada de dimension no valida.\n");
        return 1;
    }
    int matriz[N][N];

    printf("\n--- Lectura de la Matriz %d x %d ---\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Ingrese el elemento en la posicion [%d][%d]: ", i, j);
            if (scanf("%d", &elemento) != 1) {
                printf("Error: Entrada de elemento no valida.\n");
                return 1;
            }
            matriz[i][j] = elemento;
            if (elemento % 2 == 0) {
                sum_pares += elemento;
                count_pares++;
            } else {
                sum_impares += elemento;
                count_impares++;
            }
            if ((i + j) % 2 == 0) {
                sum_pos_pares += elemento;
                count_pos_pares++;
            } else {
                sum_pos_impares += elemento;
                count_pos_impares++;
            }
        }
    }
    if (count_pares > 0) {
        media_pares = (double)sum_pares / count_pares;
    }
    if (count_impares > 0) {
        media_impares = (double)sum_impares / count_impares;
    }
    if (count_pos_pares > 0) {
        media_pos_pares = (double)sum_pos_pares / count_pos_pares;
    }
    if (count_pos_impares > 0) {
        media_pos_impares = (double)sum_pos_impares / count_pos_impares;
    }
    printf("\n--- Resultados de los Calculos ---\n");
    printf("\n* La suma de los numeros pares es: **%lld**\n", sum_pares);
    printf("  Su media es: **%.2f** (Basado en %d numeros).\n", media_pares, count_pares);
    printf("* La suma de los numeros impares es: **%lld**\n", sum_impares);
    printf("  Su media es: **%.2f** (Basado en %d numeros).\n", media_impares, count_impares);
    printf("* La suma de los numeros en posiciones pares (i+j par) es: **%lld**\n", sum_pos_pares);
    printf("  Su media es: **%.2f** (Basado en %d numeros).\n", media_pos_pares, count_pos_pares);
    printf("* La suma de los numeros en posiciones impares (i+j impar) es: **%lld**\n", sum_pos_impares);
    printf("  Su media es: **%.2f** (Basado en %d numeros).\n", media_pos_impares, count_pos_impares);

    return 0;
}
