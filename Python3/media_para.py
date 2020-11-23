"""Problema:Ler a nota de 10 alunos, calcular a media e mostrar essa média"""
soma_notas=0
nota = []
for i in range(0,10):
   nota.append(int(input("Digite a %d. das 10 notas sendo cada nota entre 0 e 10.: " %(i))))
   if nota[i] >= 0 and nota[i] <=10:
      soma_notas = soma_notas + nota[i]
   else:
      print("Nota invalida, digite apenas notas de 0 a 10")    
      i-=1
       
calc_media = soma_notas / 10;   
print("A media geral dos 10 alunos .: %f",calc_media); 
   
