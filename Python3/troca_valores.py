"""Problema: Duas variáveis (A e B) possuem valores distintos (A:=5 e B:= 10),
Crie um algoritmo que armazene esses dois valores nessas duas variáveis,
e efetue a troca dos valores de forma que a variável A passe a possuir
o valor da variável B e que a variável B passe a possuir o valor da variável A.
Por fim, apresentar os valores trocado."""

a = 50
b = 100
auxiliar = a
a = b
b = auxiliar
print("A = %d"%(a))
print("B = %d"%(b))
