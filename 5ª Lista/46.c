/*Faça um programa que leia dez conjuntos de dois valores, 
o primeiro representando o numero do aluno e o segundo 
representando a sua altura em metros. Encontre o aluno 
 mais baixo e o mais alto. Mostre o numero do aluno 
mais baixo e do mais alto, juntamente com suas alturas.*/

#include<stdio.h>

int main()
{
    int i, numero[10];
    float altura[10];
    int  numalto, numbaixo;
    float maisalto=0, maisbaixo=0;
    
    for(i=0;i<10;i++){
    	printf("Digite o numero do aluno: ");
    	scanf("%d",&numero[i]);
    	
    	printf("Digite a altura do aluno: ");
    	scanf("%f",&altura[i]);
    	
    	if(maisalto<altura[i]){
    	   maisalto=altura[i];
    	   numalto=numero[i];	
		} 
	}
	maisbaixo=maisalto;
	for(i=0;i<10;i++){
	  	if(maisbaixo>altura[i]){
			maisbaixo=altura[i];
			numbaixo=numero[i];
		}
	}  	
	printf("O aluno mais alto e %d e sua altura e %4.2f\n", numalto, maisalto);
	printf("O aluno mais baixo e %d e sua altura e %4.2f\n", numbaixo, maisbaixo);
	
	return 0;
	
}
    
    
 

