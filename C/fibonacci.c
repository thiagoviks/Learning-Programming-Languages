/*Problema: Mostrar os 10 primeiros numeros da sequencia Fibonacci. Ex: 1 1 2 3 5 8  13 21 34 55 89 .....*/


#include <stdio.h>
int main()
{
       int i, num_anterior, num_atual, novo_numero;
       num_anterior = 0;
       num_atual = 1;
       printf("O 1 numero fibonaccci e 1\n");
       for(i=2;i<=10;i++)
       {
             novo_numero = num_atual + num_anterior;
             num_anterior = num_atual;
             num_atual = novo_numero;
             printf("O %d numero fibonaccci e %d\n",i,novo_numero);
       }

return 0;
}
