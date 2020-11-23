
""" Problema: O sistema de avalia��o de determinada disciplina,
é composto por três provas. A primeira prova tem peso 2,  a
segunda tem peso 3 e a terceira prova tem peso 5. Faça um algoritmo para
calcular a média final de um aluno desta disciplina."""

prova1 = int(input("Digite a nota da prova 1: "))
prova2 = int(input("Digite a nota da prova 2: "))
prova3 = int(input("Digite a nota da prova 3: "))
prova1 = prova1 * 2 /10
prova2 = prova2 * 3 /10
prova3 = prova3 * 5 /10
media  = (prova1 + prova2 + prova3)
print("A media final foi........: ",media)
