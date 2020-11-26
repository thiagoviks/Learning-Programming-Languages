"""Problema: Crie um algoritmo lendo um vetor A de 15 elementos do tipo inteiro.
 Mostre esses elementos do vetor A. Reordene os elementos em ordem decrescente,
 atualize o vetor A com os elementos na ordem decrescente e mostre novamente o vetor A."""
array = [9,3,7,6,21,50,45,36,2,8,7,9,42,32,18] 
aux = 0
for i in range(0, len(array)):
    print("Array[%d] = %d"%(i,array[i]))

for i in range(0, len(array)):
    for j in range(i+1, len(array)):
        if (array[i] < array[i+1]):
            aux = array[i]
            array[i] = array[i+1]
            array[i+1] = aux
            
print("Valores Ordenados")
for i in range(0, len(array)):
    print("Array[%d] = %d"%(i,array[i]))

