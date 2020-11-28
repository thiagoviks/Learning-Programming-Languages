
//Ler 2 n�meros, efetuar as 4 opera��es matem�ticas e mostrar os resultados. C/ fun��es

#include <stdio.h>
void leitura();
float somar(float pn1, float pn2);
float multiplicar(float pn1, float pn2);
float subtrair(float pn1, float pn2);
float dividir(float pn1, float pn2);
float num1, num2, multiplicacao, divisao, soma, subtracao;
int main()
{
   leitura();
   printf("A soma deu: %f\n",somar(num1, num2));
   printf("A multiplicacao deu: %f\n",multiplicar(num1, num2));
   printf("A subtracao deu: %f\n",subtrair(num1, num2));
   printf("A divisao deu: %f\n",dividir(num1, num2));         
return 0;
}
void leitura()
{
  printf("Digite o numero 1: ");
  scanf("%f",&num1);
  printf("Digite o numero 2: ");
  scanf("%f",&num2);
}
float somar(float pn1, float pn2)
{
   soma = pn1 + pn2;
   return(soma);
}
float multiplicar(float pn1, float pn2)
{
   multiplicacao = pn1 * pn2;
   return(multiplicacao);
}
float dividir(float pn1, float pn2)
{
   divisao = pn1 / pn2;
   return(divisao);
}
float subtrair(float pn1, float pn2)
{
   subtracao = pn1 - pn2;
   return(subtracao);
}


