#include <stdio.h>

int main() {
    float numero;
    int positivos = 0;
    int negativos = 0;

    printf("--- Conteo de Números Positivos y Negativos ---\n");
    printf("Introduce números. El programa se detendrá cuando ingreses un cero (0).\n\n");

    // 1. Inicializar el bucle leyendo el primer número
    printf("Introduce un número: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }

    // 2. Usar un bucle while que se ejecuta mientras el número no sea CERO
    while (numero != 0.0) {
        
        // 3. Evaluar si el número es positivo o negativo
        if (numero > 0.0) {
            positivos++; // El número es positivo
        } else {
            // Si el número no es 0 y no es positivo, debe ser negativo (< 0)
            negativos++; // El número es negativo
        }
        
        // 4. Leer el siguiente número para la próxima iteración
        printf("Introduce otro número: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no válida.\n");
            break; // Salir del bucle en caso de error de entrada
        }
    }

    // 5. Mostrar los resultados finales
    printf("\n--- Resultados ---\n");
    printf("Se ingresó el cero (0). Fin del proceso.\n");
    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);

    return 0;
}
