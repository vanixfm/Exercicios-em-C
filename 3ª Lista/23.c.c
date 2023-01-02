/*Dado n, calcular a soma dos n primeiros números pares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, soma;

    printf("Insira um numero natural: ");
    scanf("%d", &n);

    n = n * 2;
    i = 2;
    soma = 0;

    while(i <= n){
        soma = soma  + i;
        i = i + 2;
    }

    printf("Soma dos n primeiros pares: %d\n", soma);

    return 0;
}
