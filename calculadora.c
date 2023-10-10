#include <stdio.h>
#include <stdlib.h>

int main (){
	float preco;
        float inflacionado;

	printf("Insira o valor do produto: ");
	scanf("%f", &preco);
	
	if(preco >=  100){
		inflacionado = preco * 1.20;
	}	else {
		inflacionado = preco * 1.10;
	}

	printf("Preco do Produto: %.2f\n",preco);
	printf("Valor do Produto Inflacionado:  %.2f\n", inflacionado);

	return 0;

	}



