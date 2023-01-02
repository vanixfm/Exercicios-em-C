/******************************************************************************
Escreva um programa que verifica se um numero e par ou impar.
*******************************************************************************/


#include <stdio.h>

int main(){
    int x;
    
    printf("Escreva o valor de  X: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d e par",x);
    }else{
        printf("%d e impar",x);
    }
}
