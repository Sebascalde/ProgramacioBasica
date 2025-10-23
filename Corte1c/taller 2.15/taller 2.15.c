#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero;
    int i;
    bool es_primo = true; 
    printf("Introduce un n�mero entero positivo para verificar si es primo: ");
    
    if (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: Entrada no v�lida o n�mero negativo.\n");
        return 1;
    }
    if (numero <= 1) {
        es_primo = false;
    } else if (numero == 2) {
        es_primo = true;
    } else {
        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                es_primo = false;
                break;
            }
        }
    }

    printf("\n--- Resultado ---\n");
    if (es_primo) {
        printf("El n�mero %d es PRIMO. ?\n", numero);
    } else {
        printf("El n�mero %d NO es primo. ?\n", numero);
    }

    return 0;
}
