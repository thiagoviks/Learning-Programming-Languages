
"""Problema: Problema: Ler 3 valores INTEIROS para as vari�veis A, B, C. Apresentar os valores dispostos em 
ordem crescente. """

print("Digite três valores")
a = int(input("Digite o valor A: "))
b = int(input("Digite o valor B: "))
c = int(input("Digite o valor C: "))
if ((a <= b) and (a <= c)): 
   if (b <= c): 
      print("Em ordem crescente ficou: %d - %d - %d" %(a,b,c))
   else:
      print("Em ordem crescente ficou: %d - %d - %d" %(a,c,b))
elif (b <= a) and (b <= c):
      if(a <= c): 
         print("Em ordem crescente ficou: %d - %d - %d" %(b,a,c))
      else:
         print("Em ordem crescente ficou: %d - %d - %d" %(b,c,a))
elif (a <= b):
         print("Em ordem crescente ficou: %d - %d - %d" %(c,a,b))
else:
      print("Em ordem crescente ficou: %d - %d - %d" %(c,b,a))
