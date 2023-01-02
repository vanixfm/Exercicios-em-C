/* Dado n, calcular a soma dos números pares até n.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, soma;

    printf("Insira um numero natural: ");
    scanf("%d", &n);

    i = 1;
    soma = 0;

    while(i <= n){
        if(i % 2 == 0){
            soma = soma + i;
        }
        i++;
    }

    printf("Soma dos pares = %d", soma);


    return 0;
}
