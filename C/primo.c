
/*Problema: Crie um algoritmo que leia um numero inteiro, e diga se ele � um numero primo ou n�o.*/

#include <stdio.h>
int main()
{
    int numero,contador,i;
    contador = 0;
    i = 2;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    while((i <=  (numero/2)) && (contador == 0))
    {   
      if (numero % i == 0)
         contador = contador +1;
         i=i+1;    
    } 
    if (contador > 0)
        printf("O numero %d nao e primo\n",numero);
    else
        printf("O numero %d e primo\n",numero);
return 0;
}
