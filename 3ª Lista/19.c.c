/* Dado n, escrever os n primeiros naturais pares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Insira um numero natural: ");
    scanf("%d", &n);

    n = n * 2;
    i = 2;
    while(i <= n){
        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}
