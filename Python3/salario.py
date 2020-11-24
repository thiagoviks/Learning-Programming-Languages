"""Crie um algoritmo para calcular o salário líquido de um funcionário,
   considerando que seu salário bruto, incide um desconto de 9% em inss 
   para a previdência. O algoritmo deve mostrar o nome do funcionário,
   o seu salário bruto, o valor de desconto de inss e o seu salário 
   líquido.(dica.: Você deverá pedir (ler) o nome do funcionário e 
   o valor do salário bruto)"""
 

class cadastro:
   nome = ""
   salario_bruto = 0.0

funcionario = cadastro()
funcionario.nome = input("Digite o nome do Funcionario: ")
funcionario.salario_bruto = int(input("Digite o valor do salario bruto "))
inss = (funcionario.salario_bruto * 9) / 100
salario_liquido = funcionario.salario_bruto - inss

print("O nome do funcionario = %s" %(funcionario.nome))
print("O salario bruto = %f" %(funcionario.salario_bruto))
print("O desconto do INSS = %f" %(inss))
print("O salario liquido  = %f" %(salario_liquido))
                  
   
