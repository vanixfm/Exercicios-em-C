/*Função que recebe por referência 4 variáveis do tipo real 
e ordena (crescente) os valores destas variáveis. 
Utilize a função que troca os valores de 2 variáveis.
*/

#include <stdio.h>
int main(){
    int vec[5] = {},aux, i, j; 
    int *p; 
    for(i=0;i<5;i++){ 
        printf("Digite o elemento de numero %d: ", i+1);
        scanf("%d",&vec[i]);
    }
    p = &vec[0]; 
            for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                    if ((p+i)>(p+j)) 
                    {
                        aux = *(p+i);
                        *(p+i) = *(p+j);
                        *(p+j) = aux;
                    }
                }
            }
    for(i=5;i>=0;i--){
        printf(" %d ", vec[i]);
    }
    return 0;
}
