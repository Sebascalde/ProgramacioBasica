#include <stdio.h>
#include <math.h> // para M_PI

int main() {
    int opcion;
    char continuar;
    float lado, base, altura, radio;
    float area, perimetro;

    do {
        printf("\n=== CALCULADORA DE AREAS Y PERIMETROS (en centimetros) ===\n");
        printf("1. Cuadrado\n");
        printf("2. Rectangulo\n");
        printf("3. Triangulo\n");
        printf("4. Circulo\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("\n--- Cuadrado ---\n");
            printf("Ingrese la longitud del lado: ");
            scanf("%f", &lado);

            area = lado * lado;
            perimetro = 4 * lado;

            printf("Area = %.2f cm2\n", area);
            printf("Perimetro = %.2f cm\n", perimetro);
        }

        else if (opcion == 2) {
            printf("\n--- Rectangulo ---\n");
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);

            area = base * altura;
            perimetro = 2 * (base + altura);

            printf("Area = %.2f cm2\n", area);
            printf("Perimetro = %.2f cm\n", perimetro);
        }

        else if (opcion == 3) {
            printf("\n--- Triangulo ---\n");
            printf("Ingrese la base: ");
            scanf("%f", &base);
            printf("Ingrese la altura: ");
            scanf("%f", &altura);
            printf("Ingrese los tres lados (a, b, c): ");
            float a, b, c;
            scanf("%f %f %f", &a, &b, &c);

            area = (base * altura) / 2;
            perimetro = a + b + c;

            printf("Area = %.2f cm2\n", area);
        }

        else if (opcion == 4) {
            printf("\n--- Circulo ---\n");
            printf("Ingrese el radio: ");
            scanf("%f", &radio);

            area = M_PI * pow(radio, 2);
            perimetro = 2 * M_PI * radio;

            printf("Area = %.2f cm2\n", area);
            printf("Perimetro = %.2f cm\n", perimetro);
        }

        else {
            printf("\nOpcion no valida. Intente de nuevo.\n");
        }

        printf("\n¿Desea realizar otro calculo? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nGracias por usar el programa. Hasta luego!\n");
    return 0;
}

