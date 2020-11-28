/* Uma loja oferece para os seus clientes, um determinado desconto de acordo com
 o valor da compra efetuada. O desconto é de 10%, se o valor da compra for até
 R$200.00, 15% se for maior que R$ 200 e menor ou igual a R$ 500,00 e 20% se
 for acima de R$ 500,00. Crie um algoritmo que leia o nome do cliente e o valor
  da compra. Mostre ao final o nome do cliente, o valor da compra, o percentual
   de desconto e o seu valor e valor total a pagar deste cliente.
*/

#include <stdio.h>
int main()
{
      float valor_compra, valor_desconto, valor_pagar;
      int  desconto;
      char nome[30];

      printf("Digite o nome do cliente: ");
      scanf("%s",nome);
      printf("Digite o valor da Compra: ");
      scanf("%f",&valor_compra);
      
      if (valor_compra <= 200) 
         desconto = 10;
      else if(valor_compra <= 500)
         desconto = 15;
      else
         desconto = 20;
                 
      valor_desconto = (valor_compra * desconto) / 100;
      valor_pagar = valor_compra - valor_desconto;

      printf("\nNome do Cliente: %s",nome);
      printf("\nValor da Compra: %f",valor_compra);
      printf("\nO percentual de desconto: %d",desconto);
      printf("\nValor do desconto: %f",valor_desconto);
      printf("\nValor a pagar: %f\n",valor_pagar);
    
   
return 0;
}
