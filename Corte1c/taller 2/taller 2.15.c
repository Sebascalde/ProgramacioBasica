#include <stdio.h>
#include <stdbool.h> // Necesaria para usar el tipo de dato bool (true/false)

int main() {
    int numero;
    int i;
    // Se utiliza una bandera booleana para registrar si se encuentra un divisor
    bool es_primo = true; 

    // 1. Solicitar el número al usuario
    printf("Introduce un número entero positivo para verificar si es primo: ");
    
    if (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: Entrada no válida o número negativo.\n");
        return 1;
    }

    // 2. Manejar casos especiales (0, 1 y 2)
    if (numero <= 1) {
        // 0 y 1 NO son primos por definición
        es_primo = false;
    } else if (numero == 2) {
        // 2 es el único número par y primo
        es_primo = true;
    } else {
        // 3. Verificar divisibilidad desde 2 hasta la raíz cuadrada del número
        // Es suficiente verificar hasta la raíz cuadrada para optimizar el proceso.
        // También se puede usar hasta (numero / 2) para simplificar la lógica
        // sin usar la función sqrt(), que requiere <math.h>. Usaremos hasta (numero - 1).

        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                // Si el resto es 0, el número tiene un divisor diferente de 1 y de sí mismo
                es_primo = false;
                break; // Se rompe el ciclo tan pronto como se encuentra un divisor
            }
        }
    }

    // 4. Mostrar el resultado
    printf("\n--- Resultado ---\n");
    if (es_primo) {
        printf("El número %d es PRIMO. ?\n", numero);
    } else {
        printf("El número %d NO es primo. ?\n", numero);
    }

    return 0;
}
