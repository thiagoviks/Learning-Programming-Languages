/* Problema: O custo ao consumidor de um carro novo, � a soma do custo de f�brica
com a percentagem do revendedor e com o custo dos impostos (aplicados ao custo
de f�brica). Supondo que a percentagem do revendedor seja de 25% do custo de
f�brica e que os impostos custam 45 % do custo de f�brica, fa�a um algoritmo que
 leia o valor de custo de f�brica e determine o pre�o final do autom�vel
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
