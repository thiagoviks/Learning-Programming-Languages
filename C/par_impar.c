/*Problema: Ler uma vari�vel de numero inteiro e mostre se ele � par ou se ele � impar. */

#include <stdio.h>
int main()
{
   int numero;
   printf("Digite um numero: ");
   scanf("%d",&numero);
   if (numero % 2 == 0)
      printf("O numero %d e par\n",numero);
   else
      printf("O numero %d e impar\n",numero);    

return 0;
}

