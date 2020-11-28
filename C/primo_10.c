
/*Problema: Crie um algoritmo que mostre os 10 primeiros numeros primos*/

#include <stdio.h>
int main()
{
    int numero,contador,i,conta_primos;
    numero = 1;
    conta_primos = 0;
    while(conta_primos < 10)
    {
        contador = 0;
        numero++;
        i = 2;
        while((i <=  (numero/2)) && (contador == 0))
        {
           if (numero % i == 0)
              contador = contador +1;
           i++; //i=i+1;    
        } 
        if (contador == 0)
        {
          conta_primos++;          
          printf("O numero %d e %d numero primo\n",numero, conta_primos);
        }  
     }    
return 0;
}
