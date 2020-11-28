
/*Problema: Crie 2 vari�veis (A e B) e leia 1 valor para cada um deles.
Disponibilize eles de forma crescente.
*/

#include <stdio.h>
int main()
{
   int a,b;
   printf("Digite o valor de A: ");
   scanf("%d",&a);
   printf("Digite o valor de B: ");
   scanf("%d",&b);
   if (a > b) 
      printf("Em ordem crescente B=%d - A=%d\n",b,a);
   else
      printf("Em ordem crescente A=%d - B=%d\n",a,b);
 

return 0;
}
