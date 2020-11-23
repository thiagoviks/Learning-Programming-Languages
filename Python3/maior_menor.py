"""Problema: Fazer um algoritmo que analize 3 valores inteiros (através das variáveis n1, n2 e n3),
e informe qual o maior e qual o menor deles. """

n1 = int(input("Digite o valor para N1: "))
n2 = int(input("Digite o valor para N2: "))
n3 = int(input("Digite o valor para N3: "))
if n1 >= n2 and n1 >= n3:
   print("O maior é :",n1)
elif n2 >= n1 and n2 >= n3:
   print("O maior é :",n2)
else:
   print("O maior é :",n3)
if n1 <= n2 and n1 <= n3:
   print("O menor é: ",n1)
elif n2 <= n1 and n2 <= n3:
   print("O menor é :",n2)
else:
   print("O menor é :",n3)
