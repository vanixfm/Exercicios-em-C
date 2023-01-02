/*Faça um programa que leia um vetor de 10 posicões 
e verifique se existem valores iguais e os escreva na tela.*/

#include<stdio.h>
#define size 10

int main(){
	int vet[size],i, k;

	for(i=0;i<size;i++){
		printf("Digite o valor da posicao %d: ",i+1);
		scanf("%d",&vet[i]);
	}
	printf("Os valores repetidos sao:");
	for (i=0;i<=size;i++){
	 	for(k=i+1;k<size;k++){
			if(vet[k]==vet[i]){
				printf("%d ",vet[k]);
			}
		}
	}	
    return 0;
}
	


