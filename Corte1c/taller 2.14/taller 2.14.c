#include <stdio.h>

int main() {
    float numero;
    int positivos = 0;
    int negativos = 0;

    printf("--- Conteo de N�meros Positivos y Negativos ---\n");
    printf("Introduce n�meros. El programa se detendr� cuando ingreses un cero (0).\n\n");
    printf("Introduce un n�mero: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no v�lida.\n");
        return 1;
    }
    while (numero != 0.0) {
        if (numero > 0.0) {
            positivos++; 
        } else {
            negativos++; 
        }
        printf("Introduce otro n�mero: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no v�lida.\n");
            break; 
        }
    }
    printf("\n--- Resultados ---\n");
    printf("Se ingres� el cero (0). Fin del proceso.\n");
    printf("Cantidad de n�meros positivos: %d\n", positivos);
    printf("Cantidad de n�meros negativos: %d\n", negativos);

    return 0;
}
