
/*Problema: Ler dois n�meros (inicial e final).
Escreva quantos n�mero pares  e quantos numeros impares encontran-se entre os 
dois n�meros fornecidos pelo usu�rio.*/

#include <stdio.h>
int main()
{
   int numero_inicial, numero_final, numeros_pares, numeros_impares,i;
   numeros_pares  = 0;
   numeros_impares = 0;
   printf("Digite o numero inicial: ");
   scanf("%d",&numero_inicial); 
   i = numero_inicial;
   printf("Digite o numero final: ");
   scanf("%d",&numero_final);
   while(i <= numero_final)
   {
      if (i % 2 == 0)
         numeros_pares++;
      else
        numeros_impares++; 
      i++; 
   }
   printf("Entre o numero %d e o numero %d existem %d pares e %d impares\n",numero_inicial,numero_final,numeros_pares, numeros_impares);
return 0;
}

