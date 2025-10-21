#include <stdio.h>

int main() {
    float nota;

    // 1. Solicitar la nota del examen al usuario
    printf("Introduce la nota del examen (valor real entre 0 y 10): ");
    
    // Usar %f para leer un número real (float)
    if (scanf("%f", &nota) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1; // Sale del programa con código de error
    }

    // 2. Validar que la nota esté en el rango [0, 10]
    if (nota < 0.0 || nota > 10.0) {
        printf("Error: La nota debe estar entre 0 y 10.\n");
        return 1; // Sale del programa
    }

    // 3. Determinar e imprimir la calificación
    printf("\nLa calificación es: ");

    if (nota == 10.0) {
        printf("Matrícula de honor\n");
    } else if (nota >= 9.0) { // [9, 10)
        printf("Sobresaliente\n");
    } else if (nota >= 7.0) { // [7, 9)
        printf("Notable\n");
    } else if (nota >= 5.0) { // [5, 7)
        printf("Aprobado\n");
    } else { // [0, 5)
        printf("Suspenso\n");
    }

    return 0;
}
