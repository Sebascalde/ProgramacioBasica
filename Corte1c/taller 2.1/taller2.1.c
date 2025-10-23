#include <stdio.h>
#include <math.h> 
#define PI 3.14159265358979323846

int main() {
    int opcion;
    char repetir;
    float dato1, dato2, area, perimetro;

    do {
        printf("==========================================\n");
        printf("CALCULADORA DE AREAS Y PERIMETROS\n");
        printf("==========================================\n");
        printf("Seleccione la figura:\n");
        printf("1. Cuadrado\n");
        printf("2. Rectangulo\n");
        printf("3. Triangulo (Rectángulo)\n");
        printf("4. Circulo\n");
        printf("5. Salir\n");
        printf("Ingrese su opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("\nEntrada no valida. Intente de nuevo.\n");
 
            while (getchar() != '\n'); 
            continue;
        }
        if (opcion == 5) {
            break; 
        }
        switch (opcion) {
            case 1: 
                printf("\n--- Cuadrado ---\n");
                printf("Ingrese la longitud del lado: ");
                scanf("%f", &dato1);

                area = dato1 * dato1;
                perimetro = 4 * dato1;
                break;

            case 2:
                printf("\n--- Rectangulo ---\n");
                printf("Ingrese la base: ");
                scanf("%f", &dato1);
                printf("Ingrese la altura: ");
                scanf("%f", &dato2);

                area = dato1 * dato2;
                perimetro = 2 * (dato1 + dato2);
                break;

            case 3:
                printf("\n--- Triangulo Rectangulo ---\n");
                printf("Ingrese la base (cateto 1): ");
                scanf("%f", &dato1);
                printf("Ingrese la altura (cateto 2): ");
                scanf("%f", &dato2);

                area = (dato1 * dato2) / 2.0;
                perimetro = dato1 + dato2 + sqrt((dato1 * dato1) + (dato2 * dato2));
                break;

            case 4: 
                printf("\n--- Círculo ---\n");
                printf("Ingrese el radio: ");
                scanf("%f", &dato1);

                area = PI * dato1 * dato1;
                perimetro = 2 * PI * dato1;
                break;

            default:
                printf("\nOpcion no valida. Intentelo de nuevo.\n");
                goto preguntar_repetir; 
        }
        printf("\nRESULTADOS:\n");
        printf("Área: %.2f\n", area);
        printf("Perimetro: %.2f\n", perimetro);
        preguntar_repetir:
        printf("\n¿Desea realizar otro calculo? (S/N): ");
        while (getchar() != '\n'); 
        scanf(" %c", &repetir); 

    } while (repetir == 's' || repetir == 'S');

    printf("\nPrograma finalizado. ¡Gracias!\n");
    return 0;
}
