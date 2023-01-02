/*Dado n natural, escrever os n primeiros primos */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j, i, contagem;

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    n = n * 3;

    for(i = 1; i <= n; i++){
        contagem = 0;
        for(j = 1; j <= n; j++){
            if(i % j == 0){
                contagem ++;
            }
        }

        if(contagem == 2){
            printf("%d\n", i);
        }
    }
    return 0;
}
