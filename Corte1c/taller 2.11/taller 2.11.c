#include <stdio.h>
#include <string.h> 
#define CONTRASENA_CORRECTA "password123"
#define MAX_INTENTOS 3
#define MAX_LONGITUD 50

int main() {
    char intento[MAX_LONGITUD];
    int intentos_restantes = MAX_INTENTOS;
    int acceso_concedido = 0; 

    printf("--- Validación de Contraseña ---\n");
    while (intentos_restantes > 0 && acceso_concedido == 0) {
        printf("Intentos restantes: %d\n", intentos_restantes);
        printf("Introduce la contraseña: ");
        if (scanf("%49s", intento) != 1) { 
            printf("Error de lectura.\n");
            return 1;
        }
        if (strcmp(intento, CONTRASENA_CORRECTA) == 0) {
            acceso_concedido = 1; 
            printf("Contraseña Correcta\n");
        } else {
            intentos_restantes--;
            
            if (intentos_restantes > 0) {
                printf("Contraseña equivocada. Inténtalo de nuevo.\n\n");
            }
        }
        while (getchar() != '\n');
    }
    if (acceso_concedido == 0) {
        printf("\nHas agotado los %d intentos.\n", MAX_INTENTOS);
        printf("Contraseña equivocada\n");
    }

    return 0;
}
