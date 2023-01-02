/*********************************************************************************************************************************************************************
PROGRAMA TROCA: o usuario digita um valor na variavel X e outro valor na variavel Y. O programa deve trocar os valores, passando Y a ter o valor de X e X o valor de Y.
**********************************************************************************************************************************************************************/


#include <stdio.h>

int main(){
    int x, y , aux;
    
    printf("Escreva uma variavel X: ");
    scanf("%d",&x);
    
    printf("Escreva uma variavel Y: ");
    scanf("%d",&y);
    
    aux=x;
    x=y;
    y=aux;

    printf("X agora e:%d e Y agora e:%d",x, y );
    
    return 0;
}
