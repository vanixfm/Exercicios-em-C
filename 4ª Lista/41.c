/*Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um tri�ngulo e, neste caso, retornar qual o tipo de tri�ngulo formado. Para que X, Y e Z formem um tri�ngulo � necess�rio que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um tri�ngulo � menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de tri�ngulo formado observando as seguintes defini��es:
"	Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais.
"	Tri�ngulo Is�sceles: os comprimentos de 2 lados s�o iguais.
"	Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.
*/

#include<stdio.h>

void formula(int x, int y , int z){
	if(x==y && x==z){
		printf("Triangulo Equilatero");
	}
	else if(x==y || x==z || y==z){
		printf("Triangulo Isosceles");
	}else{
		printf("Triangulo Escaleno");
	}
}

main(){
	int a,b,c;
	printf("Nao digite valores negativos!\n\n");
	printf("Digite o lado do triangulo 1: ");
	scanf("%d",&a);
	printf("Digite o lado do triangulo 2: ");
	scanf("%d",&b);
	printf("Digite o lado do triangulo 3: ");
	scanf("%d",&c);
	formula (a,b,c);
	 
}
