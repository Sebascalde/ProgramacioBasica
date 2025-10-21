#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Necesario para inicializar el generador de números aleatorios

// Definición de constantes para los resultados
#define CARA 1
#define CRUZ 0

int main() {
    float cantidad_apostada;
    int resultado_moneda;

    // Inicializar el generador de números aleatorios con la hora actual
    srand(time(NULL));

    printf("--- Juego: Doble o Nada ---\n\n");

    // 1. Pedir la cantidad a apostar
    do {
        printf("Ingrese la cantidad a apostar (debe ser positiva): $");
        // Aseguramos que la cantidad sea un número válido y positivo
        if (scanf("%f", &cantidad_apostada) != 1 || cantidad_apostada <= 0) {
            printf("Error: La cantidad debe ser un numero positivo. Intente de nuevo.\n");
            // Limpiar el buffer de entrada en caso de error
            while (getchar() != '\n');
        } else {
            break; // Salir del bucle si la entrada es válida
        }
    } while (1);

    // Limpiar el buffer después de leer el float (buena práctica)
    while (getchar() != '\n');

    printf("\n?? Ha apostado $%.2f. ¡Tirando la moneda...!\n", cantidad_apostada);

    // 2. Simular la tirada de moneda
    // rand() % 2 genera un número aleatorio entre 0 (CRUZ) y 1 (CARA)
    resultado_moneda = rand() % 2; 

    // 3. Evaluar el resultado y mostrar la ganancia/pérdida
    if (resultado_moneda == CARA) {
        float ganancia = cantidad_apostada * 2;
        printf("\n? Resultado: ¡CARA!\n");
        printf("¡FELICIDADES! Usted obtiene el doble de lo apostado.\n");
        printf("Su ganancia total es: $%.2f\n", ganancia);
    } else { // resultado_moneda == CRUZ
        printf("\n? Resultado: ¡CRUZ!\n");
        printf("LO SIENTO: Usted pierde toda la cantidad apostada.\n");
        printf("Su perdida total es: $%.2f\n", cantidad_apostada);
    }
    
    printf("---------------------------\n");

    return 0;
}
