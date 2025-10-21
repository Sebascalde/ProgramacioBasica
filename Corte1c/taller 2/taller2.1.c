#include <stdio.h>
#include <stdlib.h> // Para la función system("clear") o system("cls")
#include <math.h>   // Para la función pow() y M_PI (constante pi)

// Definimos PI por si M_PI no está disponible en todos los entornos


void calcular_cuadrado() {
    float lado;
    printf("\n--- CUADRADO ---\n");
    printf("Ingrese la longitud del lado: ");
    if (scanf("%f", &lado) != 1 || lado <= 0) {
        printf("Error: Valor de lado inválido.\n");
        while (getchar() != '\n'); // Limpiar el buffer de entrada
        return;
    }
    printf("Área: %.2f\n", lado * lado);
    printf("Perímetro: %.2f\n", 4 * lado);
}

void calcular_rectangulo() {
    float base, altura;
    printf("\n--- RECTÁNGULO ---\n");
    printf("Ingrese la base: ");
    if (scanf("%f", &base) != 1 || base <= 0) {
        printf("Error: Valor de base inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la altura: ");
    if (scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Error: Valor de altura inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Área: %.2f\n", base * altura);
    printf("Perímetro: %.2f\n", 2 * (base + altura));
}

void calcular_triangulo() {
    float base, altura, lado1, lado2, lado3;
    printf("\n--- TRIÁNGULO ---\n");

    // Cálculo de área (base y altura)
    printf("Ingrese la base para el área: ");
    if (scanf("%f", &base) != 1 || base <= 0) {
        printf("Error: Valor de base inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la altura para el área: ");
    if (scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Error: Valor de altura inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Área: %.2f\n", (base * altura) / 2.0);

    // Cálculo de perímetro (suma de lados)
    printf("\nPara el perímetro (suma de lados):\n");
    printf("Ingrese la longitud del lado 1: ");
    if (scanf("%f", &lado1) != 1 || lado1 <= 0) {
        printf("Error: Valor de lado 1 inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la longitud del lado 2: ");
    if (scanf("%f", &lado2) != 1 || lado2 <= 0) {
        printf("Error: Valor de lado 2 inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la longitud del lado 3: ");
    if (scanf("%f", &lado3) != 1 || lado3 <= 0) {
        printf("Error: Valor de lado 3 inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Perímetro: %.2f\n", lado1 + lado2 + lado3);
}

void calcular_circulo() {
    float radio;
    printf("\n--- CÍRCULO ---\n");
    printf("Ingrese el radio: ");
    if (scanf("%f", &radio) != 1 || radio <= 0) {
        printf("Error: Valor de radio inválido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Área: %.2f\n", M_PI * pow(radio, 2));
    printf("Perímetro (Circunferencia): %.2f\n", 2 * M_PI * radio);
}

int main() {
    int opcion;
    char continuar;

    do {
        // system("cls"); // Usar en Windows
        // system("clear"); // Usar en Linux/macOS
        printf("\n============================================\n");
        printf("      CÁLCULO DE ÁREA Y PERÍMETRO\n");
        printf("============================================\n");
        printf("Seleccione la figura:\n");
        printf("1. Cuadrado\n");
        printf("2. Rectángulo\n");
        printf("3. Triángulo\n");
        printf("4. Círculo\n");
        printf("5. Salir\n");
        printf("Opción: ");

        // Manejo de entrada para la opción
        if (scanf("%d", &opcion) != 1) {
            printf("\nError: Entrada no válida. Intente de nuevo.\n");
            while (getchar() != '\n'); // Limpiar el buffer de entrada para evitar bucles infinitos
            continue; // Volver al inicio del bucle do-while
        }

        switch (opcion) {
            case 1:
                calcular_cuadrado();
                break;
            case 2:
                calcular_rectangulo();
                break;
            case 3:
                calcular_triangulo();
                break;
            case 4:
                calcular_circulo();
                break;
            case 5:
                printf("\nSaliendo del programa. ¡Hasta pronto!\n");
                return 0;
            default:
                printf("\nOpción inválida. Por favor, intente de nuevo.\n");
                break;
        }

        // Preguntar al usuario si desea continuar
        printf("\n¿Desea realizar otro cálculo? (S/N): ");
        // Limpiar el buffer después de leer el número y antes de leer el caracter
        while (getchar() != '\n'); 
        scanf(" %c", &continuar); // El espacio antes de %c es importante para omitir espacios/newlines

    } while (continuar == 'S' || continuar == 's');

    printf("\nPrograma finalizado.\n");
    return 0;
}
