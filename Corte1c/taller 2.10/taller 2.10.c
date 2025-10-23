#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
    int numero_secreto;
    int intento_usuario;
    int contador_intentos = 0;
    srand(time(0));
    numero_secreto = (rand() % 10) + 1;

    printf("�Adivina el n�mero! He generado un n�mero entre 1 y 10.\n");

    do {
        contador_intentos++;
        printf("Intento #%d. Introduce tu n�mero: ", contador_intentos);
        
        if (scanf("%d", &intento_usuario) != 1) {
            printf("Error: Entrada no v�lida. Saliendo del juego.\n");
            while (getchar() != '\n'); 
            return 1;
        }
        if (intento_usuario < numero_secreto) {
            printf("Demasiado bajo. Intenta de nuevo.\n");
        } else if (intento_usuario > numero_secreto) {
            printf("Demasiado alto. Intenta de nuevo.\n");
        }
        
    } while (intento_usuario != numero_secreto); 
    printf("\n�Felicidades! ?? Has acertado el n�mero %d.\n", numero_secreto);
    printf("Te tom� %d veces acertar.\n", contador_intentos);

    return 0;
}
