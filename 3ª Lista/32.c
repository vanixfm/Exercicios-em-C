/*Uma pessoa aplicou n reais a juros mensais de j durante 1 ano. 
Determinar o montante de cada mês durante este período (n e j são números
reais). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, j, montante;
    int i;

    printf("Insira o valor da aplicacao: ");
    scanf("%f", &n);
    printf("Insira a taxa de juros ao mes: ");
    scanf("%f", &j);

    montante = n;

    for(i = 1; i <= 12; i++){
        montante = montante * j / 100.0 + n;
        printf("Mes %d = %.2f\n", i, montante);
        n = montante;
    }


    return 0;
}
