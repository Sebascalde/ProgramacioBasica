#include <stdio.h>
#include <limits.h> // Para usar INT_MAX y INT_MIN (opcional, pero útil)

int main() {
    int valor1, valor2, valor3;
    int maximo, minimo;

    // 1. Solicitar la entrada de los tres valores
    printf("Introduce el primer valor entero: ");
    scanf("%d", &valor1);

    printf("Introduce el segundo valor entero: ");
    scanf("%d", &valor2);

    printf("Introduce el tercer valor entero: ");
    scanf("%d", &valor3);

    // 2. Determinar el MÁXIMO
    // Se inicializa con el primer valor y se compara con los siguientes
    maximo = valor1;
    
    if (valor2 > maximo) {
        maximo = valor2;
    }
    
    if (valor3 > maximo) {
        maximo = valor3;
    }

    // 3. Determinar el MÍNIMO
    // Se inicializa con el primer valor y se compara con los siguientes
    minimo = valor1;
    
    if (valor2 < minimo) {
        minimo = valor2;
    }
    
    if (valor3 < minimo) {
        minimo = valor3;
    }

    // 4. Mostrar el resultado por pantalla
    printf("\n--- Resultados ---\n");
    printf("El valor máximo es: %d\n", maximo);
    printf("El valor mínimo es: %d\n", minimo);
    
    return 0;
}
