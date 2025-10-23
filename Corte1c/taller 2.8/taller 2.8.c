#include <stdio.h>

int main() {
    int anio;
    printf("Introduce un a�o (ejemplo: 2024): ");
    if (scanf("%d", &anio) != 1) {
        printf("Error: Entrada no v�lida.\n");
        return 1;
    }
    if ((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0)) {
        printf("\nEl a�o %d es BISIESTO.\n", anio);
    } else {
        printf("\nEl a�o %d NO es bisiesto.\n", anio);
    }

    return 0;
}
