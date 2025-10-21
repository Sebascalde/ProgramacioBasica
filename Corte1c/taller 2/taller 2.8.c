#include <stdio.h>

int main() {
    int anio;

    // 1. Solicitar el año al usuario
    printf("Introduce un año (ejemplo: 2024): ");
    
    // Leer el valor entero
    if (scanf("%d", &anio) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }

    // 2. Determinar si es bisiesto usando las reglas:
    // Un año es bisiesto si:
    // (es divisible por 400) O (es divisible por 4 Y no es divisible por 100)
    
    if ((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0)) {
        printf("\nEl año %d es BISIESTO.\n", anio);
    } else {
        printf("\nEl año %d NO es bisiesto.\n", anio);
    }

    return 0;
}
