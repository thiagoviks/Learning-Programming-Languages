
"""Ler 2 números, efetuar as 4 operações matemáticas e mostrar os resultados."""

def main():
   leitura()
   print("A soma deu: %f"%(somar(input1, input2)))
   print("A multiplicacao deu: %f"%(multiplicar(input1, input2)))
   print("A subtracao deu: %f"%(subtrair(input1, input2)))
   print("A divisao deu: %f"%(dividir(input1, input2)))         


def leitura():
   global input1, input2
   input1 = int(input("Digite o numero 1: "))
   input2 = int(input("Digite o numero 2: "))
  

def somar(num1, num2):
   soma = num1 + num2
   return soma

def subtrair(num1, num2):
   subtracao = num1 - num2
   return subtracao
def multiplicar(num1, num2):
   multiplicacao = num1 * num2
   return multiplicacao

def dividir(num1, num2):
   divisao = num1 / num2
   return divisao

main()



