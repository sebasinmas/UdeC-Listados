/*
Escribe un programa que pida un número entero n, a continuación, pida ingresar n números enteros y luego
imprima: el menor, el mayor, el promedio (entero) y la mediana. Valide que n sea un número mayor a cero.
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Cuantos numeros quiere ingresar?: ");
	scanf("%d",&n);
	int nums[n];
	for (int i = 0; i < n; ++i){
		scanf("%d",&nums[i]);
	}
	int menor = nums[0];
	int mayor = nums[0];

	//Busco el menor
	for (int i = 0; i < n; ++i){
		if(menor>nums[i]){
			menor=nums[i];
		}
	}
	//Busco el mayor
	for (int i = 0; i < n; ++i){
		if(mayor<nums[i]){
			mayor=nums[i];
		}
	}
	//calculo el promedio
	int promedioSinDividir=0;
	for (int i = 0; i < n; ++i){
		promedioSinDividir+=nums[i];
	}
	//calculo la mediana
	//este pedazo de código lo saqué de internet(http://codigogx.blogspot.com/2016/07/como-calcular-la-mediana-en-c-java.html)
	//porque no quería escribir el ordenamiento de burbuja
	int aux=0;
	 for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
        	if(nums[j] > nums[j + 1]){
            	aux = nums[j];
            	nums[j] = nums[j + 1];
            	nums[j + 1] = aux;
        	}
    	}
  	}
	printf("El menor es: %d  El mayor es: %d  La mediana es: %d  El promedio es: %d \n",menor,mayor, nums[(n+1)/2] ,promedioSinDividir/n);
	return (0);
}