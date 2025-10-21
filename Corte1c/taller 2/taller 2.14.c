#include <stdio.h>

int main() {
    float numero;
    int positivos = 0;
    int negativos = 0;

    printf("--- Conteo de N�meros Positivos y Negativos ---\n");
    printf("Introduce n�meros. El programa se detendr� cuando ingreses un cero (0).\n\n");

    // 1. Inicializar el bucle leyendo el primer n�mero
    printf("Introduce un n�mero: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no v�lida.\n");
        return 1;
    }

    // 2. Usar un bucle while que se ejecuta mientras el n�mero no sea CERO
    while (numero != 0.0) {
        
        // 3. Evaluar si el n�mero es positivo o negativo
        if (numero > 0.0) {
            positivos++; // El n�mero es positivo
        } else {
            // Si el n�mero no es 0 y no es positivo, debe ser negativo (< 0)
            negativos++; // El n�mero es negativo
        }
        
        // 4. Leer el siguiente n�mero para la pr�xima iteraci�n
        printf("Introduce otro n�mero: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no v�lida.\n");
            break; // Salir del bucle en caso de error de entrada
        }
    }

    // 5. Mostrar los resultados finales
    printf("\n--- Resultados ---\n");
    printf("Se ingres� el cero (0). Fin del proceso.\n");
    printf("Cantidad de n�meros positivos: %d\n", positivos);
    printf("Cantidad de n�meros negativos: %d\n", negativos);

    return 0;
}
