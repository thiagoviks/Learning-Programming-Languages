"""Problema: Ler uma variável de numero inteiro e mostrar a tabuada desse número."""

numero = int(input("Digite um numero: "))
for i in range(1,11):
   print("%d x %d = %d"%(numero,i,(numero * i)))

