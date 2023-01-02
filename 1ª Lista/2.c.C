#include <stdio.h>

main(){
	char nome[10], endereco[50];
	int telefone;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu endereco: ");
	gets (endereco);
	
	printf("Digite seu numero de telefone: ");
	scanf("%d", &telefone);
	
	printf("Usuario %s, residente no endereco ", nome); puts(endereco); printf("portador do telefone %d",  telefone);	
	return 0;
}
