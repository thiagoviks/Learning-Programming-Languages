
/*Problema: Ler uma vari�vel de numero inteiro e mostrar a tabuada desse n�mero.*/

#include <stdio.h>
int main()
{
   int numero,i;
   printf("Digite um numero: ");
   scanf("%d",&numero);
   i = 1;
   do
   {
      printf("%d x %d = %d\n",numero,i,(numero * i));
      i++; //igual ao i=i+1
   }
   while(i <= 9);   
return 0;
}

