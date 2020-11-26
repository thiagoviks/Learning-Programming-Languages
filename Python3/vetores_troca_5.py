"""Problema: Crie um algoritmo lendo dois vetores (A e B) de 5 elementos cada do tipo inteiro,
 liste os elementos destes dois vetores. Fa�a com que os elementos do vetor A passem para
  o vetor B, e os elementos do vetor B passem para o vetor A. Mostre os 2 vetores atualizados."""
arr_a = [9,3,7,6,21]
arr_b = [6,4,9,2,28] 
arr_c = 0
print("Valores Originais")
for i in range(0, 4):
     print("Array A[%d] = %d"%(i,arr_a[i]))
     print("Array B[%d] = %d"%(i,arr_b[i]))


for i in range(0, 4):
     arr_c = arr_a[i]
     arr_a[i] = arr_b[i]
     arr_b[i] = arr_c
     
print("Valores Trocados")
for i in range(0,4):
     print("Array A[%d] = %d"%(i,arr_a[i]))
     print("Array B[%d] = %d"%(i,arr_b[i]))         

