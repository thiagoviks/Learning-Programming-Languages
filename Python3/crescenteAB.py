"""
Problema: Crie duas variáveis (A e B) e leia 1 valor para cada um deles.
Disponibilize eles de forma crescente."""

a = int(input("Digite o valor de A: "))
b = int(input("Digite o valor de B: "))
if (a > b):
   print("Em ordem crescente B = %d - A = %d" %(b,a))
else:
   print("Em ordem crescente A = %d - B = %d" %(a,b))
 
