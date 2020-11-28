// Prof Neri Aldoir Neitzke   ULBRA
// www.INFORMATICON.com.br - videoaulasneri@gmail.com
/*Problema: Mostre os 10 primeiros n�meros pares.*/

#include <stdio.h>
int main()
{
   int numero = 1, conta_pares = 0;
   while (conta_pares < 10)
   {
         if  (numero % 2 == 0)
         {
                printf("O numero %d = par.\n",numero);
                conta_pares = conta_pares + 1;
         }
         numero = numero + 1;
   }

return 0;
}

