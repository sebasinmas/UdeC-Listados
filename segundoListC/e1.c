/*
Escribe un programa que pida un número entero n 
y a continuación imprima los n primeros números de la sucesión de fibonacci. El programa debe validar la entrada.
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Cuantos números de la secuencia de Fibonacci quiere?\n");
	scanf("%d",&n);
	int fib[n];
	fib[0]=0;
	fib[1]=1;
	//crea la secuencia de fibonacci proceduralmente
	if(n>2){
		for (int i = 2; i <= n; i++){
			fib[i]=fib[i-1]+fib[i-2];
		}
		printf("La secuencia es: \n");
		for (int j = 0; j < n; ++j){
			printf("%d ",fib[j]);
		}
	}else if(n==2){
		printf("Los números de la secuencia son:\n0 1\n");
	}else if(n==1){
		printf("Los números de la secuencia son: 0\n");
	}else if(n<1){
		printf("Ingrese números válidos (Mayores o igual a 1)\n");
	}		
	
	return (0);
}