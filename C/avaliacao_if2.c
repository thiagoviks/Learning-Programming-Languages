// Prof Neri Aldoir Neitzke
// www.INFORMATICON.com.br - videoaulasneri@gmail.com
/* Problema: O sistema de avaliação de determinada disciplina, é composto
por três provas. A primeira prova tem peso 2,  a  Segunda tem peso 3 e
 a terceira prova tem peso 5. Faça um algoritmo para calcular a média
 final de um aluno desta disciplina. Caso a media seja maior ou igual
  a 6 mostre APROVADO, se a media for entre 4 e 6, mostre em RECUPERAÇÃO,
  e se for menor do que 4 mostre REPROVADO.
*/
#include <conio.h>
#include <stdio.h>
main()
{
   float prova1, prova2, prova3, media;
   printf("Digite a nota da prova 1.: ");
   scanf("%f",&prova1);//
   printf("Digite a nota da prova 2.: ");
   scanf("%f",&prova2);//
   printf("Digite a nota da prova 3.: ");
   scanf("%f",&prova3);//

    //prova1 := 6;
    //prova2 := 8;
    //prova3 := 4;

    prova1 = prova1 * 2 /10;
    prova2 = prova2 * 3 /10;
    prova3 = prova3 * 5 /10;
    media  = (prova1 + prova2 + prova3);
    
    if (media >= 6)
       printf("Aprovado com media %f'",media);
    else if (media >= 4)
       printf("Recuperacao com media %f",media);
    else 
       printf("Reprovado com media %f",media);   
    
   printf("\n\n\\n.................FIM.................."); 
   getch();   // esperar uma tecla 
}
