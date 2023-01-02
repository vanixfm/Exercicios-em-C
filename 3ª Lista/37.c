/******************************************************************************
Um matemático italiano da idade média conseguiu modelar o ritmo de
crescimento de coelhos através de uma sequência de números naturais que passou a
ser conhecida como sequência de Fibonacci. Faça um programa que dado N,
calcula Fn. Por exemplo, caso o número lido seja 6, ou seja, N=6, então 
temos:0, 1, 1, 2, 3, 5, 8, ou seja, QuandoN= 5,Fn= 8
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f, i, prox, primeiro, segundo, primeiroReserva;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if(n == 1){
        f = 0;
    }
    else if(n == 2){
        f = 1;
    }
    else{
        f = (n - 1) + (n - 2);
    }

    primeiro = 0;
    segundo = 1;

    for(i = 1; i <= f; i++){
         if(i == f){
            printf("\nO termo da sequencia de Fibonacci e o %d\n", prox - primeiroReserva);
         }

        prox = primeiro + segundo;

        if(i == f - 1){
            primeiroReserva = primeiro;
        }

        primeiro = segundo;
        segundo = prox;
    }


    return 0;
}
