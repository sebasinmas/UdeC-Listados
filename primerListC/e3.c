#include <stdio.h>
//Escribe un programa que pida tres números e imprima Cumple invariante si el primero sumado al segundo es menor al cuadrado del tercero dividido
// por el primero. 

//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){

	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1+n2<(n3*n3)/n1){
		printf("Cumple invariante");
	}else{
		printf("No cumple invariante");
	}

	return(0);
}