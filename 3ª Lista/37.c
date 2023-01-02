/******************************************************************************
Um matem�tico italiano da idade m�dia conseguiu modelar o ritmo de
crescimento de coelhos atrav�s de uma sequ�ncia de n�meros naturais que passou a
ser conhecida como sequ�ncia de Fibonacci. Fa�a um programa que dado N,
calcula Fn. Por exemplo, caso o n�mero lido seja 6, ou seja, N=6, ent�o 
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
