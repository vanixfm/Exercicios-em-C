/*Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro: 
Primeira coluna: numero de matrícula (use um inteiro)
Segunda coluna: media das provas 
Terceira coluna: media dos trabalhos
Quarta coluna: nota final
Elabore um programa que:
a ) Calcule a nota final como sendo a soma da media das provas e 
da média dos  trabalhos*/

#include<stdio.h>
#define linha 5
#define coluna 4

int main(){
	int i,j;    
	int alunos[linha][coluna];								                 
	for(i=0;i<linha;i++){
		j=0;
		printf("Digite o numero da matricula: ");
		scanf(" %d",&alunos[i][j]);
		j++;
		printf("Digite a media das prova: ");
		scanf(" %d",&alunos[i][j]);
		j++;
		printf("Digite a media dos trabalhos: ");
		scanf(" %d",&alunos[i][j]);
		j++;
		alunos[i][j]=alunos[i][j-1]+alunos[i][j-2];
	}
	for(i=0;i<linha;i++){
		for(j=3;j<coluna;j++){
			printf("A nota total do aluno: %d e : %3d",alunos[i][0],alunos[i][j]);	
		}
		printf("\n");
	}

	return 0;
}
