/***********************************************************************************************
Escreva um programa que le tres numeros x,y e z e diz se a soma deles e divisivel por 3
************************************************************************************************/


#include <stdio.h>

int main(){
    int x,y,z,soma;
    
    printf("Escreva o valor de  X: ");
    scanf("%d",&x);
    
    printf("Escreva o valor de  Y: ");
    scanf("%d",&y);
    
    printf("Escreva o valor de  Z: ");
    scanf("%d",&z);
    
    soma=x+y+z;
    
    if(soma%3==0){
        printf("%d e divisivel por 3",soma);
    }else{
        printf("%d nao e divisivel por 3",soma);
    }
}
