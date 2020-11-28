

/*Problema: Ler uma vari�vel de numero inteiro e mostrar a tabuada desse n�mero.*/


#include <stdio.h>
int main()
{
   int numero,i;
   printf("Digite um numero: ");
   scanf("%d",&numero);
   i = 1;
   while(i <= 10) 
   {
      printf("%d x %d = %d\n",numero,i,(numero * i));
      i++; 
   }   
return 0;
}

