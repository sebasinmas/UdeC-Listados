#include <stdlib.h>
#include <stdio.h>
/*
https://acm.timus.ru/problem.aspx?space=1&num=1785

*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=4){
		n=1;
	}else if(n>=5 && n<=9){
		n=2;
	}else if(n>=10 && n<=19){
		n=3;
	}else if(n>=20 && n<=49){
		n=4;
	}else if(n>=50 && n<=99){
		n=5;
	}else if(n>=100 && n<=249){
		n=6;
	}else if(n>=250 && n<=499){
		n=7;
	}else if(n>=500 && n<=999){
		n=8;
	}else if(n>=1000){
		n=9;
	}


	switch(n){
		case 1: printf("few");break;
		case 2: printf("several");break;
		case 3: printf("pack");break;
		case 4: printf("lots");break;
		case 5: printf("horde");break;
		case 6: printf("throng");break;
		case 7: printf("swarm");break;
		case 8: printf("zounds");break;
		case 9: printf("legion");break;
	}
	
	return (0);
}