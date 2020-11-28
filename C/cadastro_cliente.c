
/*Crie um algoritmo que leia para um cadastro de cliente, o seu nome, sua idade e o seu sal�rio.
 E por fim, mostre os valores.*/

#include <stdio.h>
struct cadastro
{
    char nome [30];
    int idade;
    float salario;
};
       
 int main()
{
   struct cadastro dados_cliente;
   printf("Digite o nome do Cliente: ");
   scanf("%s",dados_cliente.nome);
   printf("Digite a idade do Cliente: ");
   scanf("%d",dados_cliente.idade);
   printf("Digite o salario do Cliente: ");
   scanf("%f",dados_cliente.salario);
   
   printf("\nNome do Cliente: %s",dados_cliente.nome);
   printf("\nIdade do Cliente: %d",dados_cliente.idade);
   printf("\nSal�rio do Cliente: %f\n",dados_cliente.salario);      
   
 return 0;
}

