#include <stdlib.h>
#include <stdio.h>

/*
https://acm.timus.ru/problem.aspx?space=1&num=1877

*/

//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){
	int n,k,c;
	scanf("%d %d",&n,&k);
	//n cantidad de bistecs, k cantidad de bistecs que aguanta la sartén
	//1 minuto por cada lado
	c=(n<=k)? 2 : (2*n+k-1)/k;
    //si n es menor o igual a la cantidad de bistecs que aguanta la sartén se va a demorar 2 minutos
    //de lo contrario multiplico los minutos por los bistecs y lo divido por la capacidad de la sarten, 
    //la suma es para agregarle el minuto que le falta por ejemplo al caso de n=8 k=5, sin la suma me dice 3 y debería ser 4  

    printf("%d",c);
	return (0);
}