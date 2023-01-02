/*********************************************************************************************************
Para doar sangue e necessario ter entre 16 e 69 anos e pesar no minimo 50 kg. Escreva um programa que 
le a idade e o peso e diz se a pessoa pode ou nao doar sangue.
**********************************************************************************************************/


#include <stdio.h>

int main(){
    int idade,peso;
    printf("Escreva a sua idade: ");
    scanf("%d",&idade);
    printf("Escreva o seu peso: ");
    scanf("%d",&peso);
    if((idade>=16) && (idade<=69) && (peso>=50)){
        printf("A pessoa pode doar");
    }else{
        printf("Nao pode doar");
    }
}
