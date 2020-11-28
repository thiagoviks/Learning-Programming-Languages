
/*Problema: Duas vari�veis (A e B) possuem valores distintos (A:=5 e B:= 10),
Crie um algoritmo que armazene esses dois valores nessas duas vari�veis,
e efetue a troca dos valores de forma que a vari�vel A passe a possuir
o valor da vari�vel B e que a vari�vel B passe a possuir o valor da vari�vel A.
Por fim, apresentar os valores trocado;*/


#include <stdio.h>
int main()
{
   int a, b, auxiliar;
   a = 5;
   b = 10;
   auxiliar = a;
   a = b;
   b = auxiliar;
   printf("A = %d\n",a);
   printf("B = %d\n",b);
   return 0;
}
