#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Escreva uma funcao que recebe um inteiro
positivo m e escreve na tela todos os números
primos entre 0 e m.
 */
 
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

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("\nNumeros Primos entre 0 e %d", n);
	Imprimeprimo(n);
	
	return 0;
}
