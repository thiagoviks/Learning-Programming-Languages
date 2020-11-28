
/*Problema: Crie um algoritmo que leia um vetor de 5 elementos. Calcule e mostre a soma desses elementos,
a media, quantos elementos são iguais ou maiores do que a média, o percentual dos elementos que são maiores
ou iguais a media e mostrar quantos desses elementos são positivos e quantos são negativos.*/


#include <stdio.h>
int main()
{
       int vetor5[] = {9,-6,7,-8,2};
       float media=0, soma=0,perc_maior=0;
       int i, iguais_maior=0, qtd_pos=0, qtd_neg=0;
       for(i=0;i<=4;i++)
           soma = soma + vetor5[i];

       media = soma / 5;
       for(i=0;i<=4;i++)
       {
            if (vetor5[i] > media)
               iguais_maior = iguais_maior + 1;
            if (vetor5[i] >= 0)
               qtd_pos = qtd_pos + 1;
            else
               qtd_neg = qtd_neg + 1;

            printf("\nValor do vetor5[%d] = %d",i,vetor5[i]);

       }
       perc_maior = (iguais_maior * 100) / 5;
       printf("\n\nA soma foi: %f \nA media foi: %f \n%f%% dos elementos sao maiores ou iguais a media geral \n%d sao iguais ou maiores do que a media \n%d sao positivos \n%d sao negativos\n", soma, media, perc_maior,iguais_maior, qtd_pos,qtd_neg);

  
return 0;
}
