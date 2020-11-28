
/*Problema: Crie um algoritmo lendo um vetor A de 15 elementos do tipo inteiro.
 Mostre esses elementos do vetor A. Reordene os elementos em ordem decrescente,
 atualize o vetor A com os elementos na ordem decrescente e mostre novamente o vetor A.*/


#include <stdio.h>
int main()
{
     int a[] = {9,3,7,6,21,50,45,36,2,8,7,9,42,32,18};
     int aux;
     for(int i=0;i <= 14;i++)
         printf("A[%d] = %d\n",i,a[i]);

     for(int j=0;j <= 13;j++)
        for(int i=0;i <= 13;i++)
           if (a[i] < a[i+1])
           {
               aux = a[i];
               a[i] = a[i+1];
               a[i+1] = aux;
            };
     printf("Valores Ordenados\n");       
     for(int j=0;j <= 14;j++)
         printf("A[%d] = %d\n",j,a[j]);
return 0;
}
