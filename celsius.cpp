#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float cel, F;
	
    printf("Este algoritmo transforma uma temperatura de Celsius para Fahrenheit\n");
	printf("Qual temperatura desejada?\n");
	scanf("%f",&cel);
	
	F= (cel * 1.8) +32;

	printf("A temperatura em °F é de %.1f ", F);
	
	
}
