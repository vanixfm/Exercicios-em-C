/*Dado n natural, determinar n! (n fatorial, ou seja, para n = 5, temos
que 5! = 5 * 4 * 3 * 2 * 1 = 120) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fatorial, i;

    printf("Insira o numero para calcular o fatorial: ");
    scanf("%d", &n);

    fatorial = 1;

    for(i = n; i > 0; i--){
        fatorial = fatorial * i;
    }

    printf("Fatorial = %d\n", fatorial);


    return 0;
}
