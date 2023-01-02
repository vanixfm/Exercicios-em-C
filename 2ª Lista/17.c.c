/************************************************************************************************************************
Chama-se ano bissexto o ano ao qual e acrescentado um dia extra, ficando com 366 dias, 
um dia a mais do que os anos normais de 365 dias. Isto ocorre a cada quatro anos e eh feito com o objetivo de manter o 
calendario anual ajustado com a translacao da Terra 
e com os eventos sazonais relacionados as estacoes do ano. 
************************************************************************************************************************/


#include <stdio.h>

int main(){
    int ano;
    printf("Digite o ano que deseja consultar: ");
    scanf("%d",&ano);
    if(((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
        printf("%i, e ano bissexto",ano);
    }else{
        printf("%i, nao e ano bissexto",ano);
    }
    return 0;
}


/***************************************************************************************************************************
 A origem do nome bissexto advém da implantação do Calendário Juliano em 48 a.C. que se modificou evoluindo para o Calendário
 Gregoriano que hoje é usado em muitos países a todos os quais ocorrem os anos bissextos. Um ano é bissexto se a sua divisão 
 por 400 tem resto zero,ou seja, se o ano é divisível por 400. O ano também é dito bissexto se é divisível por 4, 
 mas não é divisível por 100. Escreva um programa que determina se um dado número é bissexto.
 **************************************************************************************************************************/
