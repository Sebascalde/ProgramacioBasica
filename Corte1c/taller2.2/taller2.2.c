#include <stdio.h>
#include <stdlib.h> 

int main() {
    char nombre_producto[100];
    float precio_unidad;
    int num_unidades;
    float precio_total;

    printf("--- Programa para Calcular el Importe de una Venta ---\n\n");
    printf("Ingrese el nombre del producto: ");
    if (fgets(nombre_producto, sizeof(nombre_producto), stdin) == NULL) {
        printf("Error al leer el nombre del producto.\n");
        return 1;
    }
    printf("Ingrese el precio por unidad: ");
    if (scanf("%f", &precio_unidad) != 1 || precio_unidad < 0) {
        printf("Entrada no válida para el precio.\n");
        return 1;
    }
    printf("Ingrese el numero de unidades vendidas: ");
    if (scanf("%d", &num_unidades) != 1 || num_unidades < 0) {
        printf("Entrada no válida para el numero de unidades.\n");
        return 1;
    }
    precio_total = precio_unidad * num_unidades;
    printf("\n--- Resumen de la Venta ---\n");
    printf("Producto: %s", nombre_producto);
    printf("Numero de unidades vendidas: %d\n", num_unidades);
    printf("Precio Total: $%.2f\n", precio_total);
    printf("---------------------------\n");
    
    return 0;
}
