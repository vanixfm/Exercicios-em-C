/*Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
"	Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
"	Triângulo Isósceles: os comprimentos de 2 lados são iguais.
"	Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
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
