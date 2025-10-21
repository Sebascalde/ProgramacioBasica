#include <stdio.h>

int main() {
    float numero;
    float suma = 0.0;
    int contador = 0;
    float promedio = 0.0;

    printf("--- Cálculo de Promedio de Números Positivos ---\n");
    printf("Introduce números positivos uno por uno.\n");
    printf("El programa terminará cuando ingreses un número negativo.\n\n");

    // 1. Inicializar el bucle leyendo el primer número
    printf("Introduce un número: ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no válida.\n");
        return 1;
    }

    // 2. Usar un bucle while que continúa solo si el número es POSITIVO o CERO
    // La condición de parada es cuando 'numero' sea NEGATIVO.
    while (numero >= 0.0) {
        // Solo incluimos números estrictamente positivos en el cálculo,
        // aunque el cero (0) también permite seguir el bucle.
        if (numero > 0.0) {
            suma += numero;    // Acumular el número a la suma total
            contador++;        // Contar cuántos números positivos se han ingresado
        }
        
        // 3. Leer el siguiente número para la próxima iteración
        printf("Introduce otro número: ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no válida.\n");
            break; // Salir del bucle en caso de error de entrada
        }
    }

    // 4. Calcular y mostrar el promedio
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
