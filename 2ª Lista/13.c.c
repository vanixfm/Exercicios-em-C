/***********************************************************************************************
Escreva um programa que verifica se um caractere e uma vogal ou uma consoante.
************************************************************************************************/


#include <stdio.h>

int main(){
    char letra;
    
    printf("Escreva uma letra maiuscula: ");
    scanf("%c",&letra);
    
    switch(letra){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("\n %c e uma vogal",letra);
        break;
        default:
        printf("\n %c e uma consoante",letra);
    }
}
