#include <stdio.h>
#include <stdlib.h> // Necesario para 'system' si se quiere pausar la consola

int main() {
    // Definición de variables para los dos números
    int num1, num2;

    printf("--- Programa para Encontrar el Mayor de Dos Numeros ---\n\n");

    // 1. Pedir el primer número
    printf("Ingrese el primer numero entero: ");
    if (scanf("%d", &num1) != 1) {
        printf("Entrada no valida para el primer numero.\n");
        return 1;
    }

    // 2. Pedir el segundo número
    printf("Ingrese el segundo numero entero: ");
    if (scanf("%d", &num2) != 1) {
        printf("Entrada no valida para el segundo numero.\n");
        return 1;
    }

    // 3. Comparar los números y mostrar el resultado

    if (num1 > num2) {
        // El primer número es mayor
        printf("\nEl numero mayor es: %d\n", num1);
    } else if (num2 > num1) {
        // El segundo número es mayor
        printf("\nEl numero mayor es: %d\n", num2);
    } else {
        // Ambos números son iguales (num1 == num2)
        printf("\nAmbos numeros son iguales: %d\n", num1);
        printf("¡Los dos numeros ingresados son identicos!\n"); // Mensaje si son iguales
    }
    
    printf("----------------------------------------------------\n");

    // Opcional: Pausar la consola en algunos sistemas
    // system("pause"); 
    
    return 0;
}
