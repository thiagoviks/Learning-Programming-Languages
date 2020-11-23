
"""Faça um algoritmo que leia um cadastro de cliente, o seu nome, sua idade e o seu salário.
e por fim, mostre os valores."""

class cadastro:
    nome = ""
    idade = 0
    salario = 0.0
       
dados_cliente = cadastro()
dados_cliente.nome    =     input("Digite o nome do Cliente: ")
dados_cliente.idade   = int(input("Digite a idade do Cliente: "))
dados_cliente.salario = int(input("Digite o salario do Cliente: "))
print("Nome do Cliente: ",dados_cliente.nome)
print("Idade do Cliente: ",dados_cliente.idade)
print("Salário do Cliente: ",dados_cliente.salario)      
   

