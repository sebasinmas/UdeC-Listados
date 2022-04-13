#include <stdlib.h>
#include <stdio.h>

/*
https://acm.timus.ru/problem.aspx?space=1&num=1877
*/

//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){
	int code1,code2;
	scanf("%d %d",&code1,&code2);
	if(code1%2==0 || code2%2!=0){
		printf("yes");
	}else{
		printf("no");
	}
//Me costó un montón entender el enunciado pero una vez digerido mentalmente, está sencillo.


	return (0);
}