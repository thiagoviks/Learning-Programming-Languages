
/*Problema: Ler uma vari�vel de numero inteiro e mostrar a tabuada desse n�mero.*/

#include <stdio.h>
int main()
{
   int numero,i;
   printf("Digite um numero: ");
   scanf("%d",&numero);
   for(i=1;i <= 10;i=i+1) 
      printf("%d x %d = %d\n",numero,i,(numero * i));
return 0;
}

