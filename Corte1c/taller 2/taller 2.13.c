#include <stdio.h>

int main() {
    float numero;
    float suma = 0.0;
    int contador = 0;
    float promedio = 0.0;

    printf("--- C�lculo de Promedio de N�meros Positivos ---\n");
    printf("Introduce n�meros positivos uno por uno.\n");
    printf("El programa terminar� cuando ingreses un n�mero negativo.\n\n");

    // 1. Inicializar el bucle leyendo el primer n�mero
    printf("Introduce un n�mero: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no v�lida.\n");
        return 1;
    }

    // 2. Usar un bucle while que contin�a solo si el n�mero es POSITIVO o CERO
    // La condici�n de parada es cuando 'numero' sea NEGATIVO.
    while (numero >= 0.0) {
        // Solo incluimos n�meros estrictamente positivos en el c�lculo,
        // aunque el cero (0) tambi�n permite seguir el bucle.
        if (numero > 0.0) {
            suma += numero;    // Acumular el n�mero a la suma total
            contador++;        // Contar cu�ntos n�meros positivos se han ingresado
        }
        
        // 3. Leer el siguiente n�mero para la pr�xima iteraci�n
        printf("Introduce otro n�mero: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no v�lida.\n");
            break; // Salir del bucle en caso de error de entrada
        }
    }

    // 4. Calcular y mostrar el promedio
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
