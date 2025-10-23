#include <stdio.h>

int main() {
    float numero;
    float suma = 0.0;
    int contador = 0;
    float promedio = 0.0;

    printf("--- C�lculo de Promedio de N�meros Positivos ---\n");
    printf("Introduce n�meros positivos uno por uno.\n");
    printf("El programa terminar� cuando ingreses un n�mero negativo.\n\n");
    printf("Introduce un n�mero: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no v�lida.\n");
        return 1;
    }
    while (numero >= 0.0) {
        if (numero > 0.0) {
            suma += numero;  
            contador++;        
        }
        printf("Introduce otro n�mero: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no v�lida.\n");
            break; 
        }
    }
    printf("\n--- Resultados ---\n");

    if (contador > 0) {
        promedio = suma / contador;
        printf("Se ingresaron %d n�meros positivos.\n", contador);
        printf("La suma total fue: %.2f\n", suma);
        printf("El promedio de los n�meros positivos es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron n�meros positivos para calcular el promedio.\n");
    }

    return 0;
}
