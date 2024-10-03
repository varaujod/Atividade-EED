#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
bool primo(int n){
	int i;

	if(n <= 1){
		return false;
	}

	for(i=2; i*i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}

	return true;
	
}

int Imprimeprimo(int n){
	int i;
	for(i=2; i<=n; i++){
		if(primo(i)){
			printf("\n%d", i);
		}
	}
}

int area(int lado){
	int a;
	
	a = lado*lado;
	return a;
}

int soma(int x){
	int soma=0, i;
	
	for(i=0; i<=x; i++)
		soma += i;
	return soma;
}

int multiplo(int n){
	int i;
		for(i=0; i<=n; i++){
			if (i % 5 == 0){
				printf("\n%d", i);
			}
		}
}

int main(int argc, char *argv[]) {
	int n, escolha;
	char continuar = 'S';
	
	do{
		printf("Escolha uma das opcoes: \n1 - Primos ate o numero escolhido pelo usuario  \n2 - Area do Quadrado  \n3 - Soma de 1 ate o numero escolhido pelo usuario  \n4 - Multiplos de 5  \n5 - Sair\n");
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1:
				printf("Digite um numero: ");
				scanf("%d", &n);
	
				printf("\nNumeros Primos entre 0 e %d", n);
				Imprimeprimo(n);
			break;
			
			case 2:
				printf("Digite um numero para calcular a area: ");
				scanf("%d", &n);
	
				printf("\nA area do seu quadrado sera de: %d", area(n));
			break;
			
			case 3:
				printf("Digite a Quantidade de Numeros que serao somados entre eles: ");
				scanf("%d", &n);
	
				printf("\nA soma entre %d valores eh de: %d", n, soma(n));
			break;
			
			case 4:
				printf("Digite um numero: ");
				scanf("%d", &n);
	
				printf("\nNumeros multiplos de 5 de 0 a %d", n);
				multiplo(n);
			break;
			
			case 5:
				printf("Saindo...");
			break;
			
			default:
				printf("Digite uma opcao permitida!");
			break;
		}
		
		printf("\nDeseja continuar? s/n ");
		scanf(" %c", &continuar);
		
	} while(continuar == 's' || continuar == 'S');
	
	
	return 0;
}