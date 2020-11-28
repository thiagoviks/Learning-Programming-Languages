/* Problema: O custo ao consumidor de um carro novo, é a soma do custo de fábrica
com a percentagem do revendedor e com o custo dos impostos (aplicados ao custo
de fábrica). Supondo que a percentagem do revendedor seja de 25% do custo de
fábrica e que os impostos custam 45 % do custo de fábrica, faça um algoritmo que
 leia o valor de custo de fábrica e determine o preço final do automóvel
 (custo ao consumidor).
*/

#include <stdio.h>
int main()
{
   float custo_fabrica, perc_revendedor,  impostos, preco_final;
   printf("Entre com o custo de fabrica: ");
   scanf("%f",&custo_fabrica);
   //custo_fabrica = 40000;
   perc_revendedor = (25 * custo_fabrica) / 100; 
   impostos = (45 * custo_fabrica) / 100;       
   preco_final = custo_fabrica + perc_revendedor + impostos;
   printf("\nO custo de fabrica: %f",custo_fabrica);
   printf("\nO percentual do revendedor: %f",perc_revendedor);
   printf("\nOs impostos: %f",impostos);
   printf("\nO preco final: %f\n",preco_final);         
   return 0;
}
