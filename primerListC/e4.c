#include <stdio.h>
// Escribe un programa que pida dos números, los almacene en dos variables distintas y los intercambie en caso de que ambos sean negativos. La operación de intercambiar dos números (conocida como operación “swap”) se refiere a intercambiar el contenido de dos direcciones de memoria. 
int main(){

	int n1,n2,cache;
	printf("Ingrese 2 valores para guardar en memoria: " );
	scanf("%d %d",&n1,&n2);
	printf("Memoria A= %d  Memoria B= %d \n",n1,n2);
	cache=n1;
	n1=n2;
	n2=cache;
	printf("Swap!!!!\n");
	printf("Memoria A= %d  Memoria B= %d \n",n1,n2);

	return(0);
}