#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "");
	int Result, c;
	
    printf("Quer calcular qualquer número divido por 3?\n");
	printf("Qual número?\n");
	scanf("%d",&c);
	
	Result= c % 3;

	printf("O resto de %d é: %d ", c, Result);
	
	
}
