"""Problema: Mostre os 10 primeiros números pares."""
numero, conta_pares = 1, 0
while conta_pares < 10:
      if  (numero % 2) == 0:
            print("O numero %d = par."%(numero))
            conta_pares += 1
      numero += 1


