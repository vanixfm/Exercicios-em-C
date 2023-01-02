/******************************************************************************
O tri�ngulo de Pascal (alguns pa�ses, nomeadamente na It�lia, � conhecido como
Tri�ngulo de Tartaglia) � um tri�ngulo num�rico infinito formado por n�meros
binomiais (i j) onde i representa o numero da linha e j representa o numero da coluna,
iniciando a contagem a partir de zero.Cada n�mero do tri�ngulo de Pascal � igual �
soma do n�mero imediatamente acima e do antecessor do n�mero de cima.
*******************************************************************************/
#include <stdio.h>

int main (){
   int n,i,j,mat[10][10];
   printf("Digite um valor: ");
   scanf ("%d",&n);
   for (i=0; i<n; i++)
   {
   for (j=0; j<n; j++)
   {
	mat[i][j]=0;
   }
   }
   for (i=0; i<n; i++)
   {
    mat[i][0]=1;
   }
   for(i=1; i<n; i++)
   {
   for (j=1; j<n; j++)
   {
	    mat[i][j]=mat[i-1][j]+mat[i-1][j-1];
    }
   }
   for (i=0; i<n; i++)
   {
    for (j=0; j<n; j++)
    {
	    if (mat[i][j]!=0)
		    printf ("%d ",mat[i][j]);
    }
    printf ("\n");
   }
   return 0;
}


