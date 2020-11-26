"""Problema: Crie um algoritmo lendo um vetor A de 15 elementos do tipo inteiro.
 Mostre esses elementos do vetor A. Reordene os elementos em ordem crescente,
 atualize o vetor A com os elementos na ordem crescente e mostre novamente o vetor A."""
array = [9,3,7,6,21,50,45,36,2,8,7,9,42,32,18] 
aux = 0
for j in range(0,len(array)):
    print("Array[%d] = %d"%(j,array[j]))

for i in range(0,len(array)):
    for j in range(i+1,len(array)):
        if (array[i] > array[j]):
            aux = array[i]
            array[i] = array[j]
            array[j] = aux
            
print("Valores Ordenados")
for j in range(0,14):
    print("Array[%d] = %d"%(j,array[j]))
