
/*Problema: Fazer um algoritmo que analize 10 valores inteiros  informa
qual o maior e qual o menor deles.*/


#include <stdio.h>
int main()
{
     int maior_menor [] = {22,3,7,8,15,9,11,7,6,4};
     int i, maior=0, menor=99999;
     for (i=0;i<9;i++)
     {
          if (maior_menor[i] > maior)
                maior = maior_menor[i];
          if (maior_menor[i] < menor)
               menor = maior_menor[i];
      }
printf("O maior valor: %d\nE o menor valor: %d\n",maior,menor);
return 0;
}
