#include <stdio.h>

int main() {
    int anio;
    printf("Introduce un año (ejemplo: 2024): ");
    if (scanf("%d", &anio) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }
    if ((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0)) {
        printf("\nEl año %d es BISIESTO.\n", anio);
    } else {
        printf("\nEl año %d NO es bisiesto.\n", anio);
    }

    return 0;
}
