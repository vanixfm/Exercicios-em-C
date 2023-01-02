/******************************************************************************
Escreva um programa que le dois numeros inteiro e verifica se eles sao iguais
*******************************************************************************/


#include <stdio.h>

int main(){
    int x, y;
    
    printf("Escreva o valor de  X: ");
    scanf("%d",&x);
    
    printf("Escreva o valor de  Y: ");
    scanf("%d",&y);
    
   if(x==y){
        printf("%d e igual a %d",x, y);
   }else{
        printf("%d nao e igual a %d",x, y);
   }
}
