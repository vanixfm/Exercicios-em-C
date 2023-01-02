/*Faça uma função que recebe a média final de um aluno 
por parâmetro e retorna o seu conceito, conforme a tabela
abaixo:
__NOTA__CONCEITO__
de 0,0 a 4,9| D
de 5,0 a 6,9| C
de 7,0 a 8,9| B
de 9,0 a 10,0| A
*/

#include<stdio.h>

float notas(float media){
	if(media>=0 && media<5){
		printf("D");
	}else if(media>=5 && media<7){
		printf("C");
	}else if(media>=7 && media<9){
		printf("B");
	}else if(media>=9 && media<=10){
		printf("A");
	}else{
		printf("Media invalida");
	}
}

main(){
	float valor;
	printf("Digite uma media: ");
	scanf("%f",&valor);	
	notas(valor);
}


