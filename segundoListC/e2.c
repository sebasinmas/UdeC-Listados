/*
Escribe un programa que pida un número entero n y a continuación imprima las n primeras potencias de dos.
El programa debe validar la entrada cuidando que el valor ingresado no sea negativo.
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, resultado;
	resultado=1;
	printf("Ingrese un número positivo para elevar a 2 por ese número: ");
	scanf("%d",&n);
	while(n<0){
		printf("Ingrese un número POSITIVO: ");
		scanf("%d",&n);
	}
	int hist[n];

	for (int i = 0; i < n; ++i){
		resultado = resultado *2;
		hist[i]=resultado;
	}

	printf("Las primeras %d potencias de 2 son: \n", n);
	for (int i = 0; i < n; ++i){
		printf(" %d", hist[i]);
	}

	return (0);
}