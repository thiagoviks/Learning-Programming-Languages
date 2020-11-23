"""Problema: Mostrar os 10 primeiros numeros da sequencia Fibonacci. Ex: 1 1 2 3 5 8  13 21 34 55 89 ..."""

num_anterior, num_atual = 0, 1
for i in range(1,11):
      novo_numero = num_atual + num_anterior
      num_anterior = num_atual
      num_atual = novo_numero
      print("O %dº numero fibonaccci é %d" %(i,novo_numero))
