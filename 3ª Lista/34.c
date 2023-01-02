/*O numero de Euler e pode ser representado e calculado por meio da
utilizacao da serie de Taylor para ex quando x = 1, como a soma da
seguinte série infinita:e=10!+11!..., faca um programa que calculen-esima interacao */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, fatorial;
    float e;

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    e = 1.0;

    for(i = 1; i <= n; i++){
        fatorial = 1;
        for(j = 2; j <= i; j++){
        fatorial = fatorial * j;
        }
        e = e + 1.0 / fatorial;
    }

    printf("\ne = %.2f\n", e);

    return 0;
}
