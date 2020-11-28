// Prof Neri Aldoir Neitzke   ULBRA
// www.INFORMATICON.com.br - videoaulasneri@gmail.com
/*Problema: Crie um algoritmo que leia três valores le,ld,li e verifique se eles podem ser os comprimentos dos
lados de um triângulo, e se forem, verificar se é um triângulo equilátero, isósceles ou escaleno. Se eles não
formarem um triângulo, escrever a mensagem "Não é um triângulo".
Antes da elaboração do algoritmo, torna-se necessária a revisão de algumas propriedades e definições.
Propriedade - O comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois
lados, fora desta condição as medidas não são consideradas de um triângulo.
Definição 1 - Chama-se triângulo equilátero os que tem os comprimentos dos três lados iguais,
Definição 2 - Chama-se triângulo isósceles ao triângulo que tem os comprimentos de dois lados guais.
Definição 3 - Chama-se triângulo escaleno ao triângulo que tem os comprimentos dos três lados diferentes. */
#include <conio.h>
#include <stdio.h>
main()
{
   float le, ld, li;
   printf("Digite o valor LE.: ");
   scanf("%f",&le);
   printf("Digite o valor LD.: ");
   scanf("%f",&ld);
   printf("Digite o valor LI.: ");
   scanf("%f",&li);
   if ((li < (le + ld)) && (le < (ld + li)) && (ld < (li + le)))
           if ((le == ld) && (le == li))
                 printf("triangulo  equilatero");
           else  if ((li == ld) || (li == le) || (le == ld)) 
                 printf("triangulo  isosceles");
           else   // if ((ld != le) && (ld != li) && (li != le))  
                  printf("triangulo  escaleno");
   else
          printf("nao e um triangulo");
   printf("\n\n\\n.................FIM.................."); 
   getch();   // esperar uma tecla 
}

