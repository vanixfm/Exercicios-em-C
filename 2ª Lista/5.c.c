/******************************************************************************
Escreva um programa que encontre o maior entre dois numeros.
*******************************************************************************/


#include <stdio.h>

int main(){
    int x, y;
    
    printf("Escreva o valor de  X: ");
    scanf("%d",&x);
    
    printf("Escreva o valor de  Y: ");
    scanf("%d",&y);
    
   if(x>y){
        printf("%d e maior que %d",x, y);
   }else{
        printf("%d nao e maior que %d",x, y);
   }
}
