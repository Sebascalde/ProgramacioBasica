#include <stdio.h>
#include <string.h> 
#define CONTRASENA_CORRECTA "password123"
#define MAX_INTENTOS 3
#define MAX_LONGITUD 50

int main() {
    char intento[MAX_LONGITUD];
    int intentos_restantes = MAX_INTENTOS;
    int acceso_concedido = 0; 

    printf("--- Validaci�n de Contrase�a ---\n");
    while (intentos_restantes > 0 && acceso_concedido == 0) {
        printf("Intentos restantes: %d\n", intentos_restantes);
        printf("Introduce la contrase�a: ");
        if (scanf("%49s", intento) != 1) { 
            printf("Error de lectura.\n");
            return 1;
        }
        if (strcmp(intento, CONTRASENA_CORRECTA) == 0) {
            acceso_concedido = 1; 
            printf("Contrase�a Correcta\n");
        } else {
            intentos_restantes--;
            
            if (intentos_restantes > 0) {
                printf("Contrase�a equivocada. Int�ntalo de nuevo.\n\n");
            }
        }
        while (getchar() != '\n');
    }
    if (acceso_concedido == 0) {
        printf("\nHas agotado los %d intentos.\n", MAX_INTENTOS);
        printf("Contrase�a equivocada\n");
    }

    return 0;
}
