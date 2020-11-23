
"""Problema: Considerando que para um consórcio, sabe-se o número total de 
prestações, a quantidade de prestações pagas e o valor atual da prestação, 
escreva um algoritmo que determine o total pago pelo consorciado e o 
saldo devedor."""

total_prest     = int(input("Digite o total das prestacoes: "))
qtd_prest_pagas = int(input("Digite a quantidade de prestacoes pagas: "))
valor_prest     = int(input("Digite o valor de cada prestacao: "))
   
total_pago = qtd_prest_pagas * valor_prest
saldo_devedor = valor_prest * (total_prest - qtd_prest_pagas)
print("O total pago é = %2.f \nE o saldo devedor é = %2.f" %(total_pago,saldo_devedor))

