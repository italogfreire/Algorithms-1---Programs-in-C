#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	printf("Digite um n�mero inteiro: \n");
	scanf("%d", &numero);
	
	if(numero > 0){
	
	
		printf("O n�mero � positivo. \n" );
	}
	
	else if(numero < 10){
		printf("O n�mero � negativo. \n");
	}
	
	else{
			printf("O n�mero � igual a 0 \n");
	}
}
