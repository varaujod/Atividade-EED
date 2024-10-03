#include <stdio.h>
#include <stdlib.h>

int multiplo(int n){
	int i;
		for(i=0; i<=n; i++){
			if (i % 5 == 0){
				printf("\n%d", i);
			}
		}
}

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("Numeros multiplos de 5 de 0 a %d", n);
	multiplo(n);
	
	return 0;
}
