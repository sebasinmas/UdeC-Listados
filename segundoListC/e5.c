/*
Escribe un programa que pida un número entero n, a continuación, pida ingresar n números enteros y luego
los imprima ordenados de la manera que se indica a continuación. Primero, deberán aparecer todos los
números pares, ordenados de menor a mayor y luego los impares ordenados de mayor a menor.
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,aux=0;
	printf("¿Cuántos números quiere ordenar?: ");
	scanf("%d",&n);
	int arr[n];
	//Ahora voy a ingresar los datos
	for (int i = 0; i < n; ++i){
		scanf("%d",&arr[i]);
				
	}
	//Ahora voy a hacer un bubble sort
	for(int i = 0; i < n; i++){
    	for(int j = 0; j < n-1; j++){
        	if(arr[j] > arr[j + 1]){
            	aux = arr[j];
            	arr[j] = arr[j + 1];
            	arr[j + 1] = aux;
        	}
    	}
  	}
  	//Ahora voy a recorrer el array y filtrar datos en 2 arrays distintos. Pares[pares] Impares[impares]
  	int pares=0,impares=0;

  	for (int i = 0; i < n; ++i){
  		if (arr[i]%2==0){
  			pares++;	
  		}else{
  			impares++;
  		}
  	}
  	int Pares[pares];
  	int Impares[impares];
  	int contP=0;
  	int contI=0;
  	for (int i = 0; i < n; ++i){
  		if (arr[i]%2==0){
  			Pares[contP]=arr[i];
  			contP++;	
  		}else{
  			Impares[contI]=arr[i];
  			contI++;
  		}	
  	}


	//print del array
	printf("El array de impares de mayor a menor es: \n");
	for (int i = impares-1; i >=0 ; --i){
		printf("%d ",Impares[i]);
	}
	printf("\nEl array de pares de menor a mayor es: \n");
	for (int i = 0; i < pares ; ++i){
		printf("%d ",Pares[i]);
	}
	return (0);
}		