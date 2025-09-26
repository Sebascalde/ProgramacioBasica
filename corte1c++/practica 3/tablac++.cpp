#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float fahr,celsius;
	float lower,upper,step;
	
	
	lower= 0;          //limite inferior de la temperatura
	upper= 300;       //limite superior
	step= 20;     //tamaño de el salto
	fahr=lower;
	while(fahr<= upper){
		celsius=(5.0/9.0)*(fahr-32.0);
		std::cout<<std::setw(3)<< std::fixed<<std::setprecision(0)<<fahr<<std::setprecision(0)<<std::endl;
		fahr=fahr+step;
	}
	return 0;
}
	

