/*Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.*/

#include <stdio.h>

int main(){
	int matriz [3][3];
	int matrizt [3][3];
	int i, j, cont=0;
		
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite os valores: ");
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("Matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrizt[i][j]=matriz[j][i];
		}
	}
	printf("Matriz Transposta\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",matrizt[i][j]);
		}
		printf("\n");
	}
	
	
}
