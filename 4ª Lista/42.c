/*Faça uma função que receba um valor 
inteiro e positivo e calcula o seu fatorial.*/

#include<stdio.h>

int fat(int i){
	int c=1, soma=i;
	while (c<i){
		soma=soma*c;
		c++;
	}
	return soma;
}

int main(){
	int n,resultado;
	printf("Digite uma valor positivo qualquer: ");
	scanf("%d",&n);	
	resultado=fat(n);
	printf("O valor e %d",resultado);	
}		

