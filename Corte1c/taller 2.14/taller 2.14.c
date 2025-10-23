#include <stdio.h>

int main() {
    float numero;
    int positivos = 0;
    int negativos = 0;

    printf("--- Conteo de Números Positivos y Negativos ---\n");
    printf("Introduce números. El programa se detendrá cuando ingreses un cero (0).\n\n");
    printf("Introduce un número: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }
    while (numero != 0.0) {
        if (numero > 0.0) {
            positivos++; 
        } else {
            negativos++; 
        }
        printf("Introduce otro número: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no válida.\n");
            break; 
        }
    }
    printf("\n--- Resultados ---\n");
    printf("Se ingresó el cero (0). Fin del proceso.\n");
    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);

    return 0;
}
