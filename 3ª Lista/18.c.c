/*Dado n, escrever os n primeiros números naturais*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Insira um numero natural: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d\n", i);
    }

    return 0;
}
