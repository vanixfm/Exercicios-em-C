/*Dado n, escrever os n primeiros naturais �mpares.*/

#include<stdio.h>
main(){
	int x, i;
	printf("Digite x: ");
	scanf("%d", &x);
	i=1;
	x*=2;
	while(i<x){
		printf("\n%d", i);
		i+=2;	
	}
	
}
