/***************************************************************************************************
Escreva um programa que verifica quantas duzias existem em um dado numero x, onde x e maior que 12. 
****************************************************************************************************/


#include <stdio.h>

int main(){
    int num;
    
    printf("Escreva um numero: ");
    scanf("%d",&num);
    printf("Cabem %d duzias no numero em %d",num/12,num);
    
}
