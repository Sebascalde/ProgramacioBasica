#include <stdio.h>
#include <string.h> // Necesaria para la función strcmp()

// Definir la contraseña correcta
#define CONTRASENA_CORRECTA "password123"
#define MAX_INTENTOS 3
#define MAX_LONGITUD 50

int main() {
    char intento[MAX_LONGITUD];
    int intentos_restantes = MAX_INTENTOS;
    int acceso_concedido = 0; // Bandera para indicar si se ha iniciado sesión

    printf("--- Validación de Contraseña ---\n");

    // Usar un bucle 'while' que se ejecuta mientras queden intentos Y el acceso no se haya concedido
    while (intentos_restantes > 0 && acceso_concedido == 0) {
        printf("Intentos restantes: %d\n", intentos_restantes);
        printf("Introduce la contraseña: ");
        
        // Leer la contraseña, asegurando no exceder el buffer
        if (scanf("%49s", intento) != 1) { 
            // Manejo de error de lectura
            printf("Error de lectura.\n");
            return 1;
        }

        // Comparar la cadena ingresada con la contraseña correcta
        // La función strcmp() retorna 0 si las cadenas son IGUALES.
        if (strcmp(intento, CONTRASENA_CORRECTA) == 0) {
            acceso_concedido = 1; // Cambia la bandera para salir del bucle
            printf("Contraseña Correcta\n");
        } else {
            intentos_restantes--; // Restar un intento
            
            if (intentos_restantes > 0) {
                printf("Contraseña equivocada. Inténtalo de nuevo.\n\n");
            }
        }
        
        // Limpiar el buffer de entrada después de scanf para evitar problemas en futuras lecturas
        while (getchar() != '\n');
    }

    // 2. Mostrar el resultado final si se agotaron los intentos
    if (acceso_concedido == 0) {
        printf("\nHas agotado los %d intentos.\n", MAX_INTENTOS);
        printf("Contraseña equivocada\n");
    }

    return 0;
}
