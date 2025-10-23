#include <stdio.h>

int main() {
    int numero;
    int i; 
    printf("Introduce un número entero para generar su tabla de multiplicar: ");
    
    if (scanf("%d", &numero) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }

    printf("\n--- Tabla de Multiplicar del %d ---\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%3d x %2d = %d\n", numero, i, numero * i);
    }
    return 0;
}
