#include <stdio.h>
#include <stdlib.h> 
#define PORCENTAJE_IRPF 0.05 

int main() {
    char nombre_trabajador[100];
    float precio_por_hora;
    int horas_trabajadas;
    
    float sueldo_bruto;
    float retencion;
    float sueldo_neto;

    printf("--- Programa de Calculo de Nomina ---\n\n");
    printf("Ingrese el nombre del trabajador: ");
    if (fgets(nombre_trabajador, sizeof(nombre_trabajador), stdin) == NULL) {
        printf("Error al leer el nombre.\n");
        return 1;
    }
    printf("Ingrese las horas trabajadas: ");
    if (scanf("%d", &horas_trabajadas) != 1 || horas_trabajadas < 0) {
        printf("Entrada no valida para las horas trabajadas.\n");
        return 1;
    }
    printf("Ingrese el precio que cobra por hora: ");
    if (scanf("%f", &precio_por_hora) != 1 || precio_por_hora < 0) {
        printf("Entrada no valida para el precio por hora.\n");
        return 1;
    }
    sueldo_bruto = horas_trabajadas * precio_por_hora;
    retencion = sueldo_bruto * PORCENTAJE_IRPF;
    sueldo_neto = sueldo_bruto - retencion;
    printf("\n--- Detalle de la Nomina ---\n");
    printf("Trabajador: %s", nombre_trabajador);
    printf("Sueldo Bruto: $%.2f\n", sueldo_bruto);
    printf("Retencion (5%% IRPF): $%.2f\n", retencion);
    printf("Sueldo Neto a Pagar: $%.2f\n", sueldo_neto);
    printf("---------------------------\n");

    
    return 0;
}
