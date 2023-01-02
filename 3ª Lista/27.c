/*Faça um programa que, dado n e m, calcule as tabuadas de todos os
números de n até m*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j, troca;

    printf("Insira os valores de n e m: ");
    scanf("%d %d", &n, &m);

    if(n > m){
        troca = n;
        n = m;
        m = troca;
    }

    for(i = n; i <= m; i++){
        printf("\nTabuada do %d:\n", i);
        for(j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", j, i, j * i);
        }
    }

    return 0;
}
