#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dividendo, divisor, quociente, resto;
	
	printf("Digite o dividendo: ");
	scanf("%d", &dividendo);
	
	printf("Digite o divisor: ");
	scanf("%d", &divisor);
	
	quociente = dividendo/divisor;
	resto = dividendo%divisor;
	
	printf("O quociente da divisão é igual a %d \n", quociente);
	printf("O resto da divisão é igual a %d \n ", resto);
	
}









