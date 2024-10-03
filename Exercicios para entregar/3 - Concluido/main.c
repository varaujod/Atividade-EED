#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma(int x){
	int soma=0, i;
	
	for(i=0; i<=x; i++)
		soma += i;
	return soma;
}

int main(int argc, char *argv[]) {
	int numero;
	
	printf("Digite a Quantidade de Numeros que serao somados entre eles: ");
	scanf("%d", &numero);
	
	printf("\nA soma entre %d valores eh de: %d", numero, soma(numero));
	
	return 0;
}