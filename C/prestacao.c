
/*Problema: Analisando a f�rmula " Presta��o = valor + (valor * (taxa/100) * tempo)",
crie um algoritmo para efetuar o c�lculo do valor de uma presta��o em atraso.
 (Voc� dever� ler o VALOR da presta��o, a TAXA  de juros imposta pelo banco,
 e o n�mero de dias em ATRASO
*/

#include <stdio.h>
int main()
{
       float prestacao, valor_prest, taxa;
       int dias_atraso;
       printf("Digite o valor da prestacao: ");
       scanf("%f",&valor_prest);
       printf("Digite a taxa de juros: ");
       scanf("%f",&taxa);
       printf("Digite o numero de dias em atraso: ");
       scanf("%d",&dias_atraso);
     
       prestacao = valor_prest + (valor_prest * (taxa/100)*dias_atraso);
 
       printf("O valor corrigido da prestacao = %f\n",prestacao);

return 0;
}
