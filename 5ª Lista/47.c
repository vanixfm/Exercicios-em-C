/*Leia uma matriz 4 x 4, conte e escreva quantos valores maiores 
que 10 ela possui. Mostre na tela a matriz e a quantidade de 
valores maiores que 10.*/
#include <stdio.h>

int main(){
	int matriz [4][4];
	int i, j, cont=0;
		
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite os valores: ");
			scanf("%d",&matriz[i][j]);	
			if(matriz[i][j]>10){
				cont++;
			}
		}			
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%3d",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Existem %d numeros maiores que 10",cont);	
	
	return 0;
}
