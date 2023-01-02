/******************************************************************************
Escreva um programa que verifica se um numero e divisivel por 2.
*******************************************************************************/


#include <stdio.h>

int main(){
    int x;
    
    printf("Escreva o valor de  X: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d e divisivel por 2",x);
    }else{
        printf("%d nao e divisivel por 2",x);
    }
}
