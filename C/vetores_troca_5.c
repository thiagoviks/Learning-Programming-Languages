
/*Problema: Crie um algoritmo lendo dois vetores (A e B) de 5 elementos cada do tipo inteiro,
 liste os elementos destes dois vetores. Fa�a com que os elementos do vetor A passem para
  o vetor B, e os elementos do vetor B passem para o vetor A. Mostre os 2 vetores atualizados.*/


#include <stdio.h>
int main()
{
     int a[] = {9,3,7,6,21};
     int b[] = {6,4,9,2,28};
     int c[5];
     printf("Valores Originais");
     for(int i=0;i <= 4;i++)
     {
          printf("A[%d] = %d\n",i,a[i]);
          printf("B[%d] = %d\n",i,b[i]);          

     }
     for(int i=0;i <= 4;i++)
     {
         c[i] = a[i];
         a[i] = b[i];
         b[i] = c[i];
     };
     printf("Valores Trocados\n");
     for(int i=0;i <= 4;i++)
     {
          printf("A[%d] = %d\n",i,a[i]);
          printf("B[%d] = %d\n",i,b[i]);          

     }

return 0;
}
