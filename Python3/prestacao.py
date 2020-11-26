
"""Problema: Analisando a fórmula " Prestação = valor + (valor * (taxa/100) * tempo)",
crie um algoritmo para efetuar o cálculo do valor de uma prestação em atraso.
 (Você deverá ler o VALOR da prestação, a TAXA  de juros imposta pelo banco,
 e o número de dias em ATRASO"""


valor_prest = float(input("Digite o valor da prestacao.: "))
taxa = float(input("Digite a taxa de juros: "))
dias_atraso = int(input("\ndigite o numero de dias em atraso: "))
prestacao = valor_prest + (valor_prest * (taxa/100)*dias_atraso)
print("O valor corrigido da prestacao = %f"%(prestacao))

