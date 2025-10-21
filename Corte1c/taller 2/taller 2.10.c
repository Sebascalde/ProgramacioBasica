#include <stdio.h>
#include <stdlib.h> // Necesaria para la función rand() y srand()
#include <time.h>   // Necesaria para inicializar la semilla de azar

int main() {
    int numero_secreto;
    int intento_usuario;
    int contador_intentos = 0;

    // 1. Inicializar el generador de números aleatorios
    // time(0) asegura que el número secreto sea diferente cada vez que corras el programa
    srand(time(0));

    // 2. Generar un número aleatorio entre 1 y 10
    // rand() % 10 genera un número entre 0 y 9. Al sumar 1, el rango es de 1 a 10.
    numero_secreto = (rand() % 10) + 1;

    printf("¡Adivina el número! He generado un número entre 1 y 10.\n");

    // 3. Bucle condicional (do-while) para los intentos del usuario
    do {
        // Incrementar el contador al inicio de cada intento
        contador_intentos++;
        
        // Solicitar el intento
        printf("Intento #%d. Introduce tu número: ", contador_intentos);
        
        if (scanf("%d", &intento_usuario) != 1) {
            printf("Error: Entrada no válida. Saliendo del juego.\n");
            // Limpiar buffer de entrada para evitar bucle infinito con entradas no numéricas
            while (getchar() != '\n'); 
            return 1;
        }

        // Dar pistas al usuario
        if (intento_usuario < numero_secreto) {
            printf("Demasiado bajo. Intenta de nuevo.\n");
        } else if (intento_usuario > numero_secreto) {
            printf("Demasiado alto. Intenta de nuevo.\n");
        }
        
    } while (intento_usuario != numero_secreto); // El bucle continúa mientras no acierte

    // 4. Mostrar el resultado final (se ejecuta solo cuando se acierta)
    printf("\n¡Felicidades! ?? Has acertado el número %d.\n", numero_secreto);
    printf("Te tomó %d veces acertar.\n", contador_intentos);

    return 0;
}
