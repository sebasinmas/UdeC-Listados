#include <stdio.h>
#include <stdlib.h>
//Escribe un programa que pida 
//cuatro números y los imprima en orden. No utilizar ciclos.

int main(){
	int a,b,c,d;
	
	printf("Por favor ingrese 4 números distintos entre si: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);



    
	//no entiendo bien a qué se refiere con en orden, de menor a mayor? al revés?
	//en el orden en que los pongo en el input? Asumo que es de menor a mayor
	if(a<=b && b<=c &&c<=d) printf("el orden es el siguiente %d %d %d %d", a,b,c,d);
	else if(a<=b && b<=d &&d<=c)printf("el orden es el siguiente %d %d %d %d", a,b,d,c);
	else if(a<=d && d<=b &&b<=c)printf("el orden es el siguiente %d %d %d %d", a,d,b,c);
	else if(a<=d && d<=c &&c<=b)printf("el orden es el siguiente %d %d %d %d", a,d,c,b);
	else if(a<=c && c<=b &&b<=d)printf("el orden es el siguiente %d %d %d %d", a,c,b,d);
	else if(a<=c && c<=d &&d<=b)printf("el orden es el siguiente %d %d %d %d", a,c,d,b);
	else if( b<=a && a<=d && d<=c)printf("el orden es el siguiente %d %d %d %d", b,a,d,c);
	else if( b<=a && a<=c && c<=d)printf("el orden es el siguiente %d %d %d %d", b,a,c,d);
	else if( b<=c && c<=a && a<=c)printf("el orden es el siguiente %d %d %d %d", b,c,a,d);
	else if( b<=c && c<=d && d<=a)printf("el orden es el siguiente %d %d %d %d", b,c,d,a);
	else if( b<=d && d<=a && a<=c)printf("el orden es el siguiente %d %d %d %d", b,d,a,c);
	else if( b<=d && d<=c && c<=a)printf("el orden es el siguiente %d %d %d %d", b,d,c,a);
	else if( c<=a && a<=b && b<=d)printf("el orden es el siguiente %d %d %d %d", c,a,b,d);
	else if( c<=a && a<=d && d<=b)printf("el orden es el siguiente %d %d %d %d", c,a,d,b);
	else if( c<=b && b<=d && d<=a)printf("el orden es el siguiente %d %d %d %d", c,b,d,a);
	else if( c<=b && b<=a && a<=d)printf("el orden es el siguiente %d %d %d %d", c,b,a,d);
	else if( c<=d && d<=a && a<=b)printf("el orden es el siguiente %d %d %d %d", c,d,a,b);
	else if( c<=d && d<=b && b<=a)printf("el orden es el siguiente %d %d %d %d", c,d,b,a);
	else if( d<=a && a<=b && b<=c)printf("el orden es el siguiente %d %d %d %d", d,a,b,c);
	else if( d<=a && a<=c && c<=b)printf("el orden es el siguiente %d %d %d %d", d,a,c,b);
	else if( d<=b && b<=a && a<=c)printf("el orden es el siguiente %d %d %d %d", d,b,a,c);
	else if( d<=b && b<=c && c<=a)printf("el orden es el siguiente %d %d %d %d", d,b,c,a);
	else if( d<=c && c<=b && b<=a)printf("el orden es el siguiente %d %d %d %d", d,c,b,a);
	else if( d<=c && c<=a && a<=b)printf("el orden es el siguiente %d %d %d %d", d,c,a,b);
	// Listo, 24 permutaciones, esto fue trabajo de chino profe, no lo vuelva a hacer por favor


	return(0);
}