#include <stdio.h>
#include <stdlib.h>
/*
	Escriba un programa que pida 3 números enteros e imprima 
	variadito si, o bien, exáctamente dos de ellos son pares o 
	dos son impares. En caso contrario imprimir uniforme
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){
	int n1,n2,n3;
	int par=0;
	int impar=0;
	scanf("%d %d %d",&n1, &n2, &n3);
	if(n1%2==0 && n2%2==0 && n3%2!=0 || n1%2==0 && n3%2==0 && n2%2!=0||n1%2!=0 && n3%2==0 && n2%2==0){
		par=1;
	}else if(n1%2!=0 && n2%2!=0 && n3%2==0|| n1%2!=0 && n3%2!=0 && n2%2==0|| n3%2!=0 && n2%2!=0 && n1%2==0){
		impar=1;
	}

	if(par==1 || impar==1){
		printf("variadito\n");
	}else{
		printf("uniforme\n");
	}




	return(0);
}