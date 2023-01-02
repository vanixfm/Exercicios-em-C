/************************************************************************************************************************
Escreva um programa que le dois numeros custo e faturamento. Escreva "obteve lucro" se faturamento - custo for positivo. 
Escreve "obteve prejuizo" se faturamento - custo for negativo. 
************************************************************************************************************************/


#include <stdio.h>

int main(){
    float custo,faturamento;
    
    printf("Escreva o custo: ");
    scanf("%f",&custo);
    printf("Escreva o faturamento: ");
    scanf("%f",&faturamento);
    if(faturamento>custo){
        printf("Obteve LUCRO");
    }else{
        printf("Obteve PREJUIZO");
    }
}
