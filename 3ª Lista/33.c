/* Programa para calcular o numero harmonico de uma certa ordem */

#include<stdio.h>

main(){
	int n, i;
	float h=0;
	printf("Digite n: ");
	scanf("%d", &n);	
	for(i=1; i<=n; i++){
		printf("1/%d + ", i);
		h = h + (1.0/i);
	};
	printf("\nSomatorio de interacoes: %.2f", h);
	return 0;
}
