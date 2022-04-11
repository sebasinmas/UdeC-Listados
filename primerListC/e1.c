#include <stdio.h>
//Escribe un programa que pida un número entero e imprima todos sus divisores entre el 2 y el 10. (No usar ciclos)

//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas 

int main(){
	int n1,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0;
	scanf("%d",&n1);
	if(n1%2==0){
		d2=1;
	};
	if(n1%3==0){
		d3=1;
	};

	if(n1%4==0){
		d4=1;		
	};

	if(n1%5==0){
		d5=1;
	};

	if(n1%6==0){
		d6=1;
	};

	if(n1%7==0){
		d7=1;
	};
	if(n1%8==0){
		d8=1;
	};

	if(n1%9==0){
		d9=1;
	};
	if(n1%9==0){
		d10=1;
	};

	printf(" Si sale un 1 es que es divisor de %d:\n\n %d/2=%d   %d/3=%d   %d/4=%d   %d/5=%d   %d/6=%d   %d/7=%d   %d/8=%d   %d/9=%d   %d/10=%d\n\n",n1,n1,d2,n1,d3,n1,d4,n1,d5,n1,d6,n1,d7,n1,d7,n1,d8,n1,d9,n1,d10);

	//el print está un poco sobrecargado de variables pero me compila y funciona a la perfección. El código es mío B)
	return(0);
}