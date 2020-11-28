
/* Problema: O sistema de avaliação de determinada disciplina,
é composto por três provas. A primeira prova tem peso 2,  a
Segunda tem peso 3 e a terceira prova tem peso 5. Faça um algoritmo para
calcular a média final de um aluno desta disciplina e se a media for maior 
ou igual a 6, mostrar APROVADO, senão, mostrar REPROVADO.
*/

#include <stdio.h>
int main()
{
   float prova1, prova2, prova3, media;
   printf("Digite a nota da prova 1: ");
   scanf("%f",&prova1);
   printf("Digite a nota da prova 2: ");
   scanf("%f",&prova2);
   printf("Digite a nota da prova 3: ");
   scanf("%f",&prova3);

    prova1 = prova1 * 2 /10;
    prova2 = prova2 * 3 /10;
    prova3 = prova3 * 5 /10;
    media  = (prova1 + prova2 + prova3);
    
    if (media >= 6)
       printf("Aprovado com media %f\n",media);
    else
       printf("Reprovado com media %f\n",media);
    
return 0;
}
