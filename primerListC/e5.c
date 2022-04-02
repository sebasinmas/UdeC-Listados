#include <stdio.h>
#include <stdlib.h>
/*Escribe un programa que pida 3 números enteros e imprima al menos uno si al menos
 uno es negativo, al menos dos si al menos dos lo son, todos en caso de que los tres
 lo sean y ninguno si todos son positivos.
*/
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas
int main(){
	int n1,n2,n3;
	scanf("%d %d %d",&n1, &n2, &n3);
	int arr[]={n1,n2,n3};
	int newArr[3]={};
	
	for(int i=0;i<3;i++){
		if(arr[i]<0){
			newArr[i]=arr[i];
			printf("%d ",newArr[i]);
		}
	}	
	printf("\n");
	return(0);
}