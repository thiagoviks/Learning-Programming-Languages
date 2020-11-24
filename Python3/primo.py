"""Problema: Crie um algoritmo que leia um numero inteiro, e diga se ele é um numero primo ou não."""

num = int(input("Digite um número: "))
if num > 1:
   for i in range(2, num):
      if (num % i) == 0:
         print("O número %d não é primo." %(num))
         break
      else:
         print("O número %d é primo." %(num))
         break

