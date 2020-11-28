
/*Problema: Fazer um algoritmo que analize 3 valores inteiros (atrav�s das vari�veis n1, n2 e n3),
e informa qual o maior e qual o menor deles. */

#include <stdio.h>
int main()
{
   int n1, n2, n3;
   printf("Digite o valor para N1: ");
   scanf("%d",&n1);
   printf("Digite o valor para N2: ");
   scanf("%d",&n2);
   printf("Digite o valor para N3: ");
   scanf("%d",&n3);
   if ((n1 >= n2) && (n1 >= n3))
      printf("O maior e o: %d\n",n1);
   else if ((n2 >= n1) && (n2 >= n3)) 
            printf("O maior e o: %d\n",n2);
        else
            printf("O maior e o: %d\n",n3);
   if ((n1 <= n2) && (n1 <= n3))
      printf("O menor e o: %d\n",n1);
   else if ((n2 <= n1) && (n2 <= n3)) 
            printf("O menor e o: %d\n",n2);
        else
            printf("O menor e o: %d\n",n3);


return 0;
}
