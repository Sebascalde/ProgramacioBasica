#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2;

    printf("--- Programa para Encontrar el Mayor de Dos Numeros ---\n\n");
    printf("Ingrese el primer numero entero: ");
    if (scanf("%d", &num1) != 1) {
        printf("Entrada no valida para el primer numero.\n");
        return 1;
    }
    printf("Ingrese el segundo numero entero: ");
    if (scanf("%d", &num2) != 1) {
        printf("Entrada no valida para el segundo numero.\n");
        return 1;
    }

    if (num1 > num2) {
        printf("\nEl numero mayor es: %d\n", num1);
    } else if (num2 > num1) {
        printf("\nEl numero mayor es: %d\n", num2);
    } else {
        printf("\nAmbos numeros son iguales: %d\n", num1);
        printf("¡Los dos numeros ingresados son identicos!\n"); 
    }
    
    printf("----------------------------------------------------\n");

    
    return 0;
}
