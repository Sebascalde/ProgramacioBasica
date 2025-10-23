#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define CARA 1
#define CRUZ 0

int main() {
    float cantidad_apostada;
    int resultado_moneda;
    srand(time(NULL));

    printf("--- Juego: Doble o Nada ---\n\n");
    do {
        printf("Ingrese la cantidad a apostar (debe ser positiva): $");
        if (scanf("%f", &cantidad_apostada) != 1 || cantidad_apostada <= 0) {
            printf("Error: La cantidad debe ser un numero positivo. Intente de nuevo.\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1);
    while (getchar() != '\n');

    printf("\n?? Ha apostado $%.2f. ¡Tirando la moneda...!\n", cantidad_apostada);
    resultado_moneda = rand() % 2; 
    if (resultado_moneda == CARA) {
        float ganancia = cantidad_apostada * 2;
        printf("\n? Resultado: ¡CARA!\n");
        printf("¡FELICIDADES! Usted obtiene el doble de lo apostado.\n");
        printf("Su ganancia total es: $%.2f\n", ganancia);
    } else { 
        printf("\n? Resultado: ¡CRUZ!\n");
        printf("LO SIENTO: Usted pierde toda la cantidad apostada.\n");
        printf("Su perdida total es: $%.2f\n", cantidad_apostada);
    }
    
    printf("---------------------------\n");

    return 0;
}
