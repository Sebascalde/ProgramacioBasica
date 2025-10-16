#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

    int array1[] = {10, 20, 30};
    int array2[] = {10, 50, 60};
    int elemA = array1[0]; 
    int elemB = array2[0]; 
    
    int esigual = (elemA == elemB);
    
    int esmenoroigual = (elemA <= elemB);
    
    int esmayor = (elemA > elemB);
    
    
    printf(" comparacion de  %d y %d \n", elemA, elemB);
    
    
    if (esigual) { 
        printf("1. Comparacion (==): SON IGUALES (Resultado int: %d)\n", esigual);
    } else {
        printf("1. Comparacion (==): SON DIFERENTES (Resultado int: %d)\n", esigual);
    }
    
    if (esmenoroigual) { 
        printf("2. Comparacion (<=): A[0] ES MENOR O IGUAL a B[0] (Resultado int: %d)\n", esmenoroigual);
    }
    
    if (esmayor) { 
        printf("3. Comparacion (>): A[0] ES MAYOR a B[0] (Resultado int: %d)\n", esmayor);
    } else {
        printf("3. Comparacion (>): A[0] NO ES MAYOR a B[0] (Resultado int: %d)\n", esmayor);
    }
    
    return 0;
}
