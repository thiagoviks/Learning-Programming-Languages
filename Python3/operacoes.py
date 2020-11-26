
def main():
   leitura()
   calculos()
   imprimir()
   
def leitura():
  global num1, num2 
  num1 = int(input("Digite o numero 1: "))
  num2 = int(input("Digite o numero 2: "))
  

def calculos():
   global soma, subtracao, divisao, multiplicacao
   soma = num1 + num2
   subtracao = num1 - num2
   divisao = num1 / num2
   multiplicacao = num1 * num2

def imprimir():
   print("A soma = %f"%(soma))
   print("A divisao = %f"%(divisao))
   print("A multiplicacao = %f" %(multiplicacao))
   print("A subtracao = %f"%(subtracao))


main()