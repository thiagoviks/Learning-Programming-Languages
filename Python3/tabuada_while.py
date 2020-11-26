"""Problema: Ler uma variável de numero inteiro e mostrar a tabuada desse número."""
numero = int(input("Digite um numero: "))
i = 1
while i <= 9:
   print("%d x %d = %d"%(numero,i,(numero * i)))
   i += 1
   
