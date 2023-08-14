#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
setlocale(LC_ALL, "");
	float Result, c;
	
    printf("Quer calcular qualquer número divido por 3?\n");
	printf("Qual número?\n");
	scanf("%f",&c);
	
	Result= c/3;

	printf("O quociente é: %.1f ", Result);
	
	
}
