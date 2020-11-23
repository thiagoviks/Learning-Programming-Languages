"""Problema:Ler a nota de 5 alunos, calcular a media e mostrar essa m�dia e mostrar tamb�m quantos alunos ficaram com a
 sua nota igual ou acima da média."""

notas = []

contador = 0
soma_notas = 0
for i in range(0,5):
    notas.append(int(input("digite a %d. nota: " %(i+1))))
    soma_notas = soma_notas + notas[i]
        
calc_media = soma_notas / 5; 
for i in range(0,5): 
    if (notas[i] >= calc_media):
        contador = contador + 1

print("A media geral foi : %f",calc_media)
print("%d alunos ficaram com a nota acima da media"%(contador))
