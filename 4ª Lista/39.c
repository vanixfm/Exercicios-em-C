/*Fa�a um procedimento que recebe a idade de um nadador por par�metro 
e retorna , tamb�m por par�metro,a categoria desse nadador de acordo 
com a tabela abaixo:
_____IDADE___CATEGORIA__
5 a 7 anos |Infantil A
8 a 11 anos|Infantil B
11 a 13 anos|Juvenil A
14 a 17 anos|Juvenil B
Maiores de 18 anos (inclusive)|Adultos
*/

#include<stdio.h>

calcule(int idade){

	if(idade>=5 && idade<=7){
		printf("Infantil A");
	}else if(idade>=8 && idade<=10){
		printf("Infantil B");
	}else if(idade>=11 && idade<=13){
		printf("Juvenil A");
	}else if(idade>=14 && idade<=17){
		printf("Juvenil B");
	}else if(idade>=18){
		printf("Adulto");
	}else{
		printf("Idade invalida");
	}
}
int main(){
	int n;
	printf("Digite a sua idade: ");
	scanf("%d",&n);	
	calcule(n);	
}


