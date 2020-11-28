
//Ler 2 n�meros, efetuar as 4 opera��es matem�ticas e mostrar os resultados. C/ parametros

#include <stdio.h>
void leitura();
void calculos(float pn1, float pn2);
void imprimir(float mult, float div, float sub, float som);
float num1, num2, multiplicacao, divisao, soma, subtracao;
int main()
{
   leitura();
   calculos(num1, num2);
   imprimir(multiplicacao, divisao, subtracao, soma); 

}
void leitura()
{
  printf("Digite o numero 1: ");
  scanf("%f",&num1);
  printf("Digite o numero 2: ");
  scanf("%f",&num2);
}
void calculos(float pn1, float pn2)
{
   soma = pn1 + pn2;
   subtracao = pn1 - pn2;
   divisao = pn1 / pn2;
   multiplicacao = pn1 * pn2;         
}
void imprimir(float mult, float div, float sub, float som)
{
   printf("A soma = %f\n",som);
   printf("A divisao = %f\n",div);
   printf("A multiplicacao = %f\n",mult);
   printf("A subtracao = %f\n",sub);   
}

