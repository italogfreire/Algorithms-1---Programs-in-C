#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	printf("Digite um número: \n");
	scanf("%d", &numero);
	
	if(numero > 0){
		printf("O número é positivo \n");
	}else{
		if(numero < 0)
			printf("O número é negativo \n");
		else
			printf("O númerto é igual a 0");
	}	
}
