/******************************************************************************
Dado um número natural n, calcular e imprimir o valor da seguinte
soma:1n+2n-1+3n-2+···+n1
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma, n, i, denominador;

    printf("Insira o numero para iniciar a soma: ");
    scanf("%f", &n);

    soma = 0.0;
    denominador = n;

    for(i = 1.0; i <= n; i++){
        soma = soma + i / denominador;
        denominador--;
    }

    printf("\nValor da soma = %.2f\n", soma);

    return 0;
}
