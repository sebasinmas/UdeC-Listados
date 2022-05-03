/*
Escribe un programa que pida un número entero y escriba primo o compuesto según sea el caso.
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, cont, noPrimo;
	noPrimo=0;
	printf("Ingrese un número entero: ");
	scanf("%d",&n);
	for (int i = 2; i <= n/2; ++i){
		if(n%i==0){
			noPrimo=1;
		}
	}
	if(n>=0 && n<=1 || n==4){
		printf("No es primo \n");
	}else if (noPrimo==1){
		printf("No es primo \n");
	}else{
		printf("Es primo");
	}

	return (0);
}