#include <stdlib.h>
#include <stdio.h>

// Escriba un programa que pida 3 coordenadas (x, y) e imprima “contenido” si la tercera coordenada está contenida en el rectángulo delimitado 
//por las primeras dos coordenadas. En caso contrario, imprima “no contenido”.
//
//El código en todos los casos es mío a menos que especifique lo contrario >:( -Sebastián SinMas

int main(){
int cord1x,cord1y,cord2x,cord2y,cord3x,cord3y;
printf("Por favor escriba la primera coordenada X e Y: ");
scanf("%d %d", &cord1x,&cord1y);
printf("Por favor escriba la segunda coordenada X e Y: ");
scanf("%d %d", &cord2x, &cord2y);
printf("Por favor escriba la tercera coordenada X e Y: ");
scanf("%d %d", &cord3x, &cord3y);

if((cord3x>=0 && cord3y>=0) && cord3x <= cord2x && cord3y <=cord2y || (cord3x>=0 && cord3y>=0) && cord3x <= cord1x && cord3y <=cord1y ){
    printf("\ncontenido");    
}else if((cord3x<=0 && cord3y>=0) && cord3x >= cord2x && cord3y <=cord2y || (cord3x<=0 && cord3y>=0) && cord3x >= cord1x && cord3y <=cord1y){
    printf("\ncontenido"); 
}else if((cord3x<=0 && cord3y<=0) && cord3x >= cord2x && cord3y >=cord2y || (cord3x<=0 && cord3y<=0) && cord3x >= cord1x && cord3y >=cord1y){
    printf("\ncontenido");
}else if((cord3x>=0 && cord3y<=0) && cord3x <= cord2x && cord3y >=cord2y || (cord3x>=0 && cord3y<=0) && cord3x <= cord1x && cord3y >=cord1y){
    printf("\ncontenido");
}else{
    printf("\nno contenido");
}



	return (0);
}