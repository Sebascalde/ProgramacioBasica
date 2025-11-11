#include <stdio.h>

int main() {
    int N, M; 
    int count_pares = 0;

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
    int i = 0;
    int j = 0;
       
    printf("\n--- Lectura de la Matriz ---\n");
    for ( i < N; i++;) {
        for ( j < M; j++;) {
            printf("Ingrese el elemento en la posicion [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Error: Entrada de elemento no valida.\n");

                return 1;
            }

            if (matriz[i][j] % 2 == 0) {
                count_pares++;
            }
        }
    }

    printf("\n--- Resultado ---\n");
    printf("La matriz ingresada es de dimension %d x %d.\n", N, M);
    printf("El numero total de valores pares en la matriz es: **%d**\n", count_pares);

    return 0;
}
