/*
Escribe un programa que pida un número entero y escriba primo o compuesto según sea el caso.
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, cont, noPrimo;
	noPrimo=1;
	printf("Ingrese un número entero: ");
	scanf("%d",&n);
	
	for (int i = 2; i <= n/2; ++i){
		if(n%i==0){
			noPrimo=1;
		}
	}



	return (0);
}