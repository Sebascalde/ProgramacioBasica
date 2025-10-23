#include <stdio.h>

int main() {
    float numero;
    float suma = 0.0;
    int contador = 0;
    float promedio = 0.0;

    printf("--- Cálculo de Promedio de Números Positivos ---\n");
    printf("Introduce números positivos uno por uno.\n");
    printf("El programa terminará cuando ingreses un número negativo.\n\n");
    printf("Introduce un número: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }
    while (numero >= 0.0) {
        if (numero > 0.0) {
            suma += numero;  
            contador++;        
        }
        printf("Introduce otro número: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no válida.\n");
            break; 
        }
    }
    printf("\n--- Resultados ---\n");

    if (contador > 0) {
        promedio = suma / contador;
        printf("Se ingresaron %d números positivos.\n", contador);
        printf("La suma total fue: %.2f\n", suma);
        printf("El promedio de los números positivos es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron números positivos para calcular el promedio.\n");
    }

    return 0;
}
