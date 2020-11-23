"""Problema: Crie um algoritmo que gere uma matriz exerc_matriz 3x3, inserir dados nos
elementos dessa matriz, por fim, mostre os dados contidos na matriz."""
linhas = int(input("Digite o número de linhas"))
colunas = int(input("Digite o número de colunas"))
#linhas = 3
#colunas = 3
exerc_matriz = []
for l in range(linhas):
  temp = []
  for c in range(colunas):
    temp.append(int(input("Digite os valores da matriz[%d][%d]: "%(l,c))))
  exerc_matriz.append(temp)
                
for l in range(linhas):
  for c in range(colunas):
    print(str("O valor de exerc_matriz[%d][%d]: %d" %(l,c,exerc_matriz[l][c])))

