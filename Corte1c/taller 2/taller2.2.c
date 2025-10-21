#include <stdio.h>
#include <stdlib.h> // Necesario para 'system' si se quiere pausar la consola

int main() {
    // Definición de variables
    char nombre_producto[100];
    float precio_unidad;
    int num_unidades;
    float precio_total;

    printf("--- Programa para Calcular el Importe de una Venta ---\n\n");

    // 1. Pedir el nombre del producto
    printf("Ingrese el nombre del producto: ");
    // Leemos el nombre del producto (permite espacios hasta 99 caracteres)
    if (fgets(nombre_producto, sizeof(nombre_producto), stdin) == NULL) {
        printf("Error al leer el nombre del producto.\n");
        return 1;
    }
    // Opcional: Eliminar el salto de línea que agrega fgets (si es necesario)
    // int i = 0;
    // while (nombre_producto[i] != '\n' && nombre_producto[i] != '\0') {
    //     i++;
    // }
    // nombre_producto[i] = '\0';


    // 2. Pedir el precio por unidad (usamos float para decimales)
    printf("Ingrese el precio por unidad: ");
    if (scanf("%f", &precio_unidad) != 1 || precio_unidad < 0) {
        printf("Entrada no válida para el precio.\n");
        return 1;
    }
    
    // 3. Pedir el número de unidades
    printf("Ingrese el numero de unidades vendidas: ");
    if (scanf("%d", &num_unidades) != 1 || num_unidades < 0) {
        printf("Entrada no válida para el numero de unidades.\n");
        return 1;
    }

    // 4. Calcular el precio total
    precio_total = precio_unidad * num_unidades;

    // 5. Sacar por pantalla la información solicitada
    printf("\n--- Resumen de la Venta ---\n");
    printf("Producto: %s", nombre_producto);
    printf("Numero de unidades vendidas: %d\n", num_unidades);
    // %.2f para mostrar solo dos decimales (formato de moneda)
    printf("Precio Total: $%.2f\n", precio_total);
    printf("---------------------------\n");

    // Opcional: Pausar la consola en algunos sistemas
    // system("pause"); 
    
    return 0;
}
