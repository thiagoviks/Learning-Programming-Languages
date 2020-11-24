"""Problema: Ler dois números (inicial e final).
Escreva quantos número pares  e quantos numeros impares encontran-se entre os 
dois números fornecidos pelo usuário."""

numeros_pares  = 0
numeros_impares = 0
numero_inicial = int(input("Digite o numero inicial: "))
 
i = numero_inicial
numero_final = int(input("Digite o numero final: "))
while i <= numero_final:
   i+=1
   if i % 2 == 0:
      numeros_pares+= 1
   else:
      numeros_impares+=1
      

print("Entre o numero %d e o numero %d existem %d pares e %d impares"
%(numero_inicial,numero_final,numeros_pares, numeros_impares))
 
