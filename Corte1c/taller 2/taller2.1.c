#include <stdio.h>
#include <stdlib.h> // Para la funci�n system("clear") o system("cls")
#include <math.h>   // Para la funci�n pow() y M_PI (constante pi)

// Definimos PI por si M_PI no est� disponible en todos los entornos


void calcular_cuadrado() {
    float lado;
    printf("\n--- CUADRADO ---\n");
    printf("Ingrese la longitud del lado: ");
    if (scanf("%f", &lado) != 1 || lado <= 0) {
        printf("Error: Valor de lado inv�lido.\n");
        while (getchar() != '\n'); // Limpiar el buffer de entrada
        return;
    }
    printf("�rea: %.2f\n", lado * lado);
    printf("Per�metro: %.2f\n", 4 * lado);
}

void calcular_rectangulo() {
    float base, altura;
    printf("\n--- RECT�NGULO ---\n");
    printf("Ingrese la base: ");
    if (scanf("%f", &base) != 1 || base <= 0) {
        printf("Error: Valor de base inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la altura: ");
    if (scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Error: Valor de altura inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("�rea: %.2f\n", base * altura);
    printf("Per�metro: %.2f\n", 2 * (base + altura));
}

void calcular_triangulo() {
    float base, altura, lado1, lado2, lado3;
    printf("\n--- TRI�NGULO ---\n");

    // C�lculo de �rea (base y altura)
    printf("Ingrese la base para el �rea: ");
    if (scanf("%f", &base) != 1 || base <= 0) {
        printf("Error: Valor de base inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la altura para el �rea: ");
    if (scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Error: Valor de altura inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("�rea: %.2f\n", (base * altura) / 2.0);

    // C�lculo de per�metro (suma de lados)
    printf("\nPara el per�metro (suma de lados):\n");
    printf("Ingrese la longitud del lado 1: ");
    if (scanf("%f", &lado1) != 1 || lado1 <= 0) {
        printf("Error: Valor de lado 1 inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la longitud del lado 2: ");
    if (scanf("%f", &lado2) != 1 || lado2 <= 0) {
        printf("Error: Valor de lado 2 inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Ingrese la longitud del lado 3: ");
    if (scanf("%f", &lado3) != 1 || lado3 <= 0) {
        printf("Error: Valor de lado 3 inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("Per�metro: %.2f\n", lado1 + lado2 + lado3);
}

void calcular_circulo() {
    float radio;
    printf("\n--- C�RCULO ---\n");
    printf("Ingrese el radio: ");
    if (scanf("%f", &radio) != 1 || radio <= 0) {
        printf("Error: Valor de radio inv�lido.\n");
        while (getchar() != '\n');
        return;
    }
    printf("�rea: %.2f\n", M_PI * pow(radio, 2));
    printf("Per�metro (Circunferencia): %.2f\n", 2 * M_PI * radio);
}

int main() {
    int opcion;
    char continuar;

    do {
        // system("cls"); // Usar en Windows
        // system("clear"); // Usar en Linux/macOS
        printf("\n============================================\n");
        printf("      C�LCULO DE �REA Y PER�METRO\n");
        printf("============================================\n");
        printf("Seleccione la figura:\n");
        printf("1. Cuadrado\n");
        printf("2. Rect�ngulo\n");
        printf("3. Tri�ngulo\n");
        printf("4. C�rculo\n");
        printf("5. Salir\n");
        printf("Opci�n: ");

        // Manejo de entrada para la opci�n
        if (scanf("%d", &opcion) != 1) {
            printf("\nError: Entrada no v�lida. Intente de nuevo.\n");
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
                printf("\nSaliendo del programa. �Hasta pronto!\n");
                return 0;
            default:
                printf("\nOpci�n inv�lida. Por favor, intente de nuevo.\n");
                break;
        }

        // Preguntar al usuario si desea continuar
        printf("\n�Desea realizar otro c�lculo? (S/N): ");
        // Limpiar el buffer despu�s de leer el n�mero y antes de leer el caracter
        while (getchar() != '\n'); 
        scanf(" %c", &continuar); // El espacio antes de %c es importante para omitir espacios/newlines

    } while (continuar == 'S' || continuar == 's');

    printf("\nPrograma finalizado.\n");
    return 0;
}
