#include <stdio.h>

int main() {
    int dia, mes;
    printf("Introduce tu mes de nacimiento (1 a 12): ");
    scanf("%d", &mes);

    printf("Introduce tu d�a de nacimiento: ");
    scanf("%d", &dia);

    printf("\nTu signo zodiacal es: ");

    switch (mes) {
        case 1: // Enero
            if (dia >= 20) {
                printf("Acuario ?\n");
            } else {
                printf("Capricornio ?\n");
            }
            break;
            
        case 2: // Febrero
            if (dia >= 19) {
                printf("Piscis ?\n");
            } else {
                printf("Acuario ?\n");
            }
            break;
            
        case 3: // Marzo
            if (dia >= 21) {
                printf("Aries ?\n");
            } else {
                printf("Piscis ?\n");
            }
            break;
            
        case 4: // Abril
            if (dia >= 20) {
                printf("Tauro ?\n");
            } else {
                printf("Aries ?\n");
            }
            break;
            
        case 5: // Mayo
            if (dia >= 21) {
                printf("G�minis ?\n");
            } else {
                printf("Tauro ?\n");
            }
            break;
            
        case 6: // Junio
            if (dia >= 21) {
                printf("C�ncer ?\n");
            } else {
                printf("G�minis ?\n");
            }
            break;
            
        case 7: // Julio
            if (dia >= 23) {
                printf("Leo ?\n");
            } else {
                printf("C�ncer ?\n");
            }
            break;
            
        case 8: // Agosto
            if (dia >= 23) {
                printf("Virgo ?\n");
            } else {
                printf("Leo ?\n");
            }
            break;
            
        case 9: // Septiembre
            if (dia >= 23) {
                printf("Libra ?\n");
            } else {
                printf("Virgo ?\n");
            }
            break;
            
        case 10: // Octubre
            if (dia >= 23) {
                printf("Escorpio ?\n");
            } else {
                printf("Libra ?\n");
            }
            break;
            
        case 11: // Noviembre
            if (dia >= 22) {
                printf("Sagitario ?\n");
            } else {
                printf("Escorpio ?\n");
            }
            break;
            
        case 12: // Diciembre
            if (dia >= 22) {
                printf("Capricornio ?\n");
            } else {
                printf("Sagitario ?\n");
            }
            break;
            
        default:
            printf("Mes no v�lido.\n");
            break;
    }

    // Nota: Para simplificar, este c�digo asume que el usuario introduce un d�a v�lido
    // para el mes (ej. no introduce d�a 31 en Febrero). Se podr�a a�adir validaci�n, pero
    // no fue requerido expl�citamente en el problema.
    
    return 0;
}
