#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &numero);
	
	if(numero > 0){
	
	
		printf("O número é positivo. \n" );
	}
	
	else if(numero < 10){
		printf("O número é negativo. \n");
	}
	
	else{
			printf("O número é igual a 0 \n");
	}
}
