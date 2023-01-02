/* Dado um número n, onde n > 0 sempre, faça um programa que calcule
a sua tabuada.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Insira um numero maior que zero: ");
    scanf("%d", &n);

    while(n < 0){
        printf("Numero invalido. Digite novamente um valor maior que zero: ");
        scanf("%d", &n);
    }

    printf("\nTabuada do %d:\n", n);

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, n, n * i);
    }

    return 0;
}
