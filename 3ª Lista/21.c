/*Dado n, calcular a soma dos n primeiros n�meros naturais at� n.*/

#include<stdio.h>
main(){
	int x, i, soma;
	printf("Digite x: ");
	scanf("%d", &x);
	i=1;
	soma = 0;
	while(i<=x){
		soma += i;
		i++;
	}
	printf("%d", soma);
	
}
