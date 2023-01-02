/* Numeros primos sao os numeros naturais p' que tem apenas dois divisores: 1 e p',
 ou seja ele mesmo.Para descobrir se um dado numero p e primo, voce pode verificar se
existe algum numero entre 1 e p que divide p alem de 1 e ele mesmo.
Se houver tal numero, entao p nao a primo. Caso contrario, p e primo.
Dado p inteiro, verificar se p e primo.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, i, contagem;

    printf("Insira um numero para saber se e primo ou nao: ");
    scanf("%d", &p);

    contagem = 0;

    for(i = 1; i <= p; i++){
        if(p % i == 0){
            contagem ++;
        }
    }

    if(contagem > 2){
        printf("\nO numero nao e primo.\n");
    }
    else {
        printf("\nO numero e primo.\n");
    }

    return 0;
}
