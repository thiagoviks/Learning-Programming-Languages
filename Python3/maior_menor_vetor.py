"""Problema: Fazer um algoritmo que analize 10 valores inteiros  informa
qual o maior e qual o menor deles."""
maior_menor = [22,3,7,8,15,9,11,7,6,4] 
maior, menor = 0, 99999
for i in range(0,9):
     if(maior_menor[i] > maior):
          maior = maior_menor[i]
     if (maior_menor[i] < menor):
          menor = maior_menor[i]
      
print("O maior valor é : %d\nE o menor valor é : %d " %(maior,menor))
