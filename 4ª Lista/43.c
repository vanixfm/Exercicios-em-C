/*Faça um procedimento que recebe, por parâmetro, um valor N e calcula 
e escreve a tabuada de 1 até N. Mostre a tabuada na forma:
1 x N = N
2 x N = 2N … N x N = N2
*/

#include<stdio.h>

void calctab(int x) {
	int i = 1;
	for (i = 0; i < 10; i++)
		printf("\t%d x %d = %d\n", x, i, (x * i));
}

int main(void) {
	int valor;
	printf("Digite um numero: ");
	scanf("%d", &valor);
	calctab(valor);
	return 0;
}

