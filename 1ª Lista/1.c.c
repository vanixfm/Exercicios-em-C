/************************************************************************************
Repetir exatamente o que o usuario digitar. Pode receber valores reais um de cada vez
*************************************************************************************/

#include <stdio.h>

int main()
{
    float numero;
    printf("Digite um numero real: ");
    scanf("%f",&numero);
    printf("O numero real e: %.2f", numero);

    return 0;
}
