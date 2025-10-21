#include <stdio.h>
#include <stdlib.h> // Necesario para 'system' si se quiere pausar la consola

#define PORCENTAJE_IRPF 0.05 // 5% de retención

int main() {
    // Definición de variables
    char nombre_trabajador[100];
    float precio_por_hora;
    int horas_trabajadas;
    
    float sueldo_bruto;
    float retencion;
    float sueldo_neto;

    printf("--- Programa de Calculo de Nomina ---\n\n");

    // 1. Pedir el nombre del trabajador
    printf("Ingrese el nombre del trabajador: ");
    // Leemos el nombre (fgets es preferible para cadenas con espacios)
    if (fgets(nombre_trabajador, sizeof(nombre_trabajador), stdin) == NULL) {
        printf("Error al leer el nombre.\n");
        return 1;
    }

    // 2. Pedir las horas trabajadas
    printf("Ingrese las horas trabajadas: ");
    if (scanf("%d", &horas_trabajadas) != 1 || horas_trabajadas < 0) {
        printf("Entrada no valida para las horas trabajadas.\n");
        return 1;
    }

    // 3. Pedir el precio que cobra por hora
    printf("Ingrese el precio que cobra por hora: ");
    if (scanf("%f", &precio_por_hora) != 1 || precio_por_hora < 0) {
        printf("Entrada no valida para el precio por hora.\n");
        return 1;
    }

    // 4. Proceso de cálculo
    
    // Sueldo Bruto = Horas Trabajadas * Precio por Hora
    sueldo_bruto = horas_trabajadas * precio_por_hora;
    
    // Retención (IRPF 5%) = Sueldo Bruto * 0.05
    retencion = sueldo_bruto * PORCENTAJE_IRPF;
    
    // Sueldo Neto = Sueldo Bruto - Retención
    sueldo_neto = sueldo_bruto - retencion;

    // 5. Salida: Imprimir el sueldo bruto, la retención y el sueldo neto
    printf("\n--- Detalle de la Nomina ---\n");
    printf("Trabajador: %s", nombre_trabajador);
    // Usamos %.2f para formato de moneda (dos decimales)
    printf("Sueldo Bruto: $%.2f\n", sueldo_bruto);
    printf("Retencion (5%% IRPF): $%.2f\n", retencion);
    printf("Sueldo Neto a Pagar: $%.2f\n", sueldo_neto);
    printf("---------------------------\n");

    // Opcional: Pausar la consola en algunos sistemas
    // system("pause"); 
    
    return 0;
}
