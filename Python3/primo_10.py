"""Problema: Crie um algoritmo que mostre os primeiros numeros primos dentro de um intervalo"""
abaixo = 100
acima = 1000

print("Os números primos entre %d e %d são: "%(abaixo, acima))
for num in range(abaixo, acima+1):
   if num > 1:
      for i in range(2,num):
         if(num % i) == 0:
            #print("O número %d não é primo." %(num))
            break
         else:
            print("O número %d é primo." %(num))
            break