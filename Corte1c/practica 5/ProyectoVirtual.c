#include <stdio.h>

int main(void) {
     int i = 0;

inicio:         // etiqueta
     if (i < 10) {
         printf("i = %d\n", i);
         i++;
         goto inicio;         

     }
     
	 return 0;
}
