#include <stdlib.h>
#include <stdio.h>

/*
https://acm.timus.ru/problem.aspx?space=1&num=2012

*/

//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){
	int n,cargaEjercicios;
	scanf("%d",&n);
	cargaEjercicios=12-n;
	if(cargaEjercicios<=5){
		printf("YES");
	}else{
		printf("NO");
	}
	return (0);
}