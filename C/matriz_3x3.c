
/*Problema: Crie um algoritmo que gere uma matriz exerc_matriz 3x3, inserir dados nos
elementos dessa matriz, por fim, mostre os dados contidos na matriz.*/


#include <stdio.h>
int main()
{
  int exerc_matriz [3][3];
  for(int l=0;l<=2;l++)
    for(int c=0;c<=2;c++)
    {
      printf("Digite valor para exerc_matriz[%d][%d]: ",l,c);
      scanf("%d",&exerc_matriz[l][c]); 
              
    };
printf("\n");  
for(int l=0;l<=2;l++)
  for(int c=0;c<=2;c++)
 printf("O valor de exerc_matriz[%d][%d]: %d\n",l,c,exerc_matriz[l][c]);

return 0;
}
