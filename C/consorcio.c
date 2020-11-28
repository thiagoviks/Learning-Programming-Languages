
/*Problema: Considerando que para um cons�rcio, sabe-se o n�mero total de 
presta��es, a quantidade de presta��es pagas e o valor atual da presta��o, 
escreva um algoritmo que determine o total pago pelo consorciado e o 
saldo devedor.
*/

#include <stdio.h>
int main()
{
   float valor_prest, total_pago, saldo_devedor;
   int total_prest, qtd_prest_pagas;
   printf("Digite o total das prestacoes: ");
   scanf("%d",&total_prest);
   printf("Digite a quantidade de prestacoes pagas: ");
   scanf("%d",&qtd_prest_pagas);
   printf("Digite o valor de cada prestacao: ");
   scanf("%f",&valor_prest);
   
   total_pago = qtd_prest_pagas * valor_prest;
   saldo_devedor = valor_prest * (total_prest - qtd_prest_pagas);

   printf("O total pago = %f \nE o saldo devedor = %f\n",total_pago,saldo_devedor);

}
