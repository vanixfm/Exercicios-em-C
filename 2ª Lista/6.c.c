/******************************************************************************
Escreva um programa que encontre o maior entre tres numeros.
*******************************************************************************/


#include <stdio.h>

int main(){
    int x, y, z;
    
    printf("Escreva o valor de  X: ");
    scanf("%d",&x);
    
    printf("Escreva o valor de  Y: ");
    scanf("%d",&y);
    
    printf("Escreva o valor de  Z: ");
    scanf("%d",&z);
    
   if(x>y && x>z){
        printf("%d e o maior",x);
   }else if(y>x && y>z){
        printf("%d e o maior",y);
   }else{
       printf("%d e o maior",z);
   }
}
