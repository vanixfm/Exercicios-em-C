/******************************************************************************
Escreva um programa que verifica se um numero e positivo, negativo, ou zero.
*******************************************************************************/


#include <stdio.h>

int main(){
    int a;
    
    printf("Escreva o valor de  A: ");
    scanf("%d",&a);
    if(a>0){
        printf("%d e positivo",a);
    }else if(a<0){
        printf("%d e negativo",a);
    }else{
        printf("%d e0 zero",a);
    }
}
