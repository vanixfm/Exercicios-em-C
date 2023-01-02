/***********************************************************************************************
Escreva um programa que le dois numeros x e y e diz se x e divisivel por 2 e y e divisivel por 3
************************************************************************************************/


#include <stdio.h>

int main(){
    int x,y;
    
    printf("Escreva o valor de  X: ");
    scanf("%d",&x);
    
    printf("Escreva o valor de  Y: ");
    scanf("%d",&y);
    
    if(x%2==0){
        printf("%d e divisivel por 2\n",x);
    }else{
         printf("%d nao e divisivel por 2\n",x);
    }
    if(y%3==0){
         printf("%d e divisivel por 3\n",y);
    }else{
         printf("%d nao e divisivel por 3\n",y);
    }
    
}
