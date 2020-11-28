
/* 1.	Problema: Um cliente de um banco tem um saldo positivo de R$ 500,00. 
Fazer um algoritmo que leia um cheque que entrou e calcule o saldo, 
mostrando (escrevendo) o saldo na tela.
*/

#include <stdio.h>
int main()
{
   float valor_saldo, cheque_entrou;
   valor_saldo = 500;
   printf("Digite o valor do cheque que entrou: ");
   scanf("%f",&cheque_entrou);
   valor_saldo = valor_saldo - cheque_entrou;
   printf("O saldo Atual: %f\n",valor_saldo);         
return 0;
}
