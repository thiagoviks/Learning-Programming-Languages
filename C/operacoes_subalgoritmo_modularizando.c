
//Ler 2 n�meros, efetuar as 4 opera��es matem�ticas e mostrar os resultados.

#include <stdio.h>
void leitura();
void calculos();
void imprimir();
float num1, num2, multiplicacao, divisao, soma, subtracao;
int main()
{
   leitura();
   calculos();
   imprimir(); 
   
   return 0;
}
void leitura()
{
  printf("Digite o numero 1: ");
  scanf("%f",&num1);
  printf("Digite o numero 2: ");
  scanf("%f",&num2);
}
void calculos()
{
   soma = num1 + num2;
   subtracao = num1 - num2;
   divisao = num1 / num2;
   multiplicacao = num1 * num2;         
}
void imprimir()
{
   printf("\nA soma = %f",soma);
   printf("\nA divisao = %f",divisao);
   printf("\nA multiplicacao = %f",multiplicacao);
   printf("\nA subtracao = %f\n",subtracao);   
}

