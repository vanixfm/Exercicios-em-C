/*Dado x e y, onde y > x sempre, faça um programa que escreve o intervalo de x até y.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, troca, i;

    printf("Insira os valores de x e y respectivamente:\n");
    scanf("%d %d", &x, &y);

    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }

    for(i = x; i <= y; i++){
        printf("\n%d ", i);
    }

    return 0;
}
