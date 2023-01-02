/******************************************************************************
Em matemática, a fórmula de Leibniz para calcular p, que leva o nome de
Gottfried Wilhelm Leibniz, estabelece
que:p=41-43+45-47+49-411+413-415+417···(5)Dado um númeron, faça um
programa que calcule p até a n-ésimaiteração, ou seja, paran= 4 p=41+43+45+47
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float pi;

    printf("Insira o valor de n para o calculo de pi: ");
    scanf("%d", &n);

    n = n * 2;
    pi = 0;

    for(i = 1; i <= n; i+=2){
        pi = pi + 4.0 / i;
    }

    printf("\nPi = %.2f\n", pi);

    return 0;
}
