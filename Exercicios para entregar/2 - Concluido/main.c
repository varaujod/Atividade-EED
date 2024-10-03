#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int area(int lado){
	int a;
	
	a = lado*lado;
	return a;
}

int main(int argc, char** argv) {
	int lado;
	
	printf("Digite um numero: ");
	scanf("%d", &lado);
	
	printf("\nA area do seu quadrado sera de: %d", area(lado));
	return 0;
}