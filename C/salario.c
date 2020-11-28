
/*Crie um algoritmo para calcular o sal�rio l�quido de um funcion�rio,
 considerando que seu sal�rio bruto, incide um desconto de 9% em inss 
 para a previd�ncia. O algoritmo deve mostrar o nome do funcion�rio,
  o seu sal�rio bruto, o valor de desconto de inss e o seu sal�rio 
  l�quido.(dica.: Voc� dever� pedir (ler) o nome do funcion�rio e 
  o valor do sal�rio bruto)
*/

#include <stdio.h>
int main()
{
   float salario_liquido, salario_bruto,  inss;
   char nome[40];
   printf("Digite o nome do Funcionario: ");
   scanf("%s",nome);
   printf("Digite o valor do salario bruto: ");
   scanf("%f",&salario_bruto);
   inss = (salario_bruto * 9) / 100;
   salario_liquido = salario_bruto - inss;

   printf("O nome do funcionario = %s \nO salario bruto = %f \nO desconto do Inss = %f \nO salario Liquido = %f\n"
   ,nome,salario_bruto,inss,salario_liquido);
return 0;
}
