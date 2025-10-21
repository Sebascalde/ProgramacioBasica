#include <stdio.h>
#include <stdbool.h> // Necesaria para usar el tipo de dato bool (true/false)

int main() {
    int numero;
    int i;
    // Se utiliza una bandera booleana para registrar si se encuentra un divisor
    bool es_primo = true; 

    // 1. Solicitar el n�mero al usuario
    printf("Introduce un n�mero entero positivo para verificar si es primo: ");
    
    if (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: Entrada no v�lida o n�mero negativo.\n");
        return 1;
    }

    // 2. Manejar casos especiales (0, 1 y 2)
    if (numero <= 1) {
        // 0 y 1 NO son primos por definici�n
        es_primo = false;
    } else if (numero == 2) {
        // 2 es el �nico n�mero par y primo
        es_primo = true;
    } else {
        // 3. Verificar divisibilidad desde 2 hasta la ra�z cuadrada del n�mero
        // Es suficiente verificar hasta la ra�z cuadrada para optimizar el proceso.
        // Tambi�n se puede usar hasta (numero / 2) para simplificar la l�gica
        // sin usar la funci�n sqrt(), que requiere <math.h>. Usaremos hasta (numero - 1).

        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                // Si el resto es 0, el n�mero tiene un divisor diferente de 1 y de s� mismo
                es_primo = false;
                break; // Se rompe el ciclo tan pronto como se encuentra un divisor
            }
        }
    }

    // 4. Mostrar el resultado
    printf("\n--- Resultado ---\n");
    if (es_primo) {
        printf("El n�mero %d es PRIMO. ?\n", numero);
    } else {
        printf("El n�mero %d NO es primo. ?\n", numero);
    }

    return 0;
}
