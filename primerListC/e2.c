#include <stdio.h>
//Escribe un programa que pida dos números enteros e imprima el doble del menor de ellos. 

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