#include <stdio.h>
//Escribe un programa que pida dos números enteros e imprima el doble del menor de ellos. 

//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){
	int n1,n2,menorD;
	scanf("%d %d",&n1, &n2);
	if(n1>n2){
		menorD=2*n2;
	}else{
		menorD=2*n1;
	}

	printf("%d \n",menorD);

	return(0);
}