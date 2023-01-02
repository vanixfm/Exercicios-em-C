/* Dados x inteiro (inteiros positivos e negativos) e n natural (inteiros
positivos), calcular x n (x elevado à n). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, n, exponencial;

    printf("Insira um valor inteiro: ");
    scanf("%d", &x);
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &n);

    exponencial = pow(x, n);

    printf("\nExponencial = %d\n", exponencial);

    return 0;
}
