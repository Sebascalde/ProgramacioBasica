#include <stdio.h>
#include <limits.h> 

int main() {
    int valor1, valor2, valor3;
    int maximo, minimo;
    printf("Introduce el primer valor entero: ");
    scanf("%d", &valor1);
    printf("Introduce el segundo valor entero: ");
    scanf("%d", &valor2);
    printf("Introduce el tercer valor entero: ");
    scanf("%d", &valor3);
    maximo = valor1;
    
    if (valor2 > maximo) {
        maximo = valor2;
    }
    
    if (valor3 > maximo) {
        maximo = valor3;
    }
    minimo = valor1;
    
    if (valor2 < minimo) {
        minimo = valor2;
    }
    
    if (valor3 < minimo) {
        minimo = valor3;
    }
    printf("\n--- Resultados ---\n");
    printf("El valor máximo es: %d\n", maximo);
    printf("El valor mínimo es: %d\n", minimo);
    
    return 0;
}
