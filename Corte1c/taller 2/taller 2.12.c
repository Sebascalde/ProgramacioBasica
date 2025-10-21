#include <stdio.h>

int main() {
    int numero;
    int i; // Variable de control para el bucle y el multiplicador

    // 1. Solicitar el número al usuario
    printf("Introduce un número entero para generar su tabla de multiplicar: ");
    
    if (scanf("%d", &numero) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }

    printf("\n--- Tabla de Multiplicar del %d ---\n", numero);

    // 2. Usar un bucle 'for' para calcular e imprimir los resultados
    // El bucle va desde i = 1 hasta i = 10
    for (i = 1; i <= 10; i++) {
        // Imprimir la operación y el resultado: "Número x i = Resultado"
        printf("%3d x %2d = %d\n", numero, i, numero * i);
    }
    
    // Las especificaciones de formato (%3d, %2d) son opcionales
    // y solo se usan para alinear los números de la tabla.

    return 0;
}
