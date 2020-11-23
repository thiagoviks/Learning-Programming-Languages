"""
Uma loja oferece para os seus clientes, um determinado desconto de acordo com
o valor da compra efetuada. O desconto � de 10%, se o valor da compra for at�
R$200.00, 15% se for maior que R$ 200 e menor ou igual a R$ 500,00 e 20% se
for acima de R$ 500,00. Crie um algoritmo que leia o nome do cliente e o valor
da compra. Mostre ao final o nome do cliente, o valor da compra, o percentual
de desconto e o seu valor e valor total a pagar deste cliente. """


nome = input("Digite o nome do cliente: ")
valor_compra = int(input("Digite o valor da Compra: "))
if(valor_compra <= 200):
      desconto = 10
elif(valor_compra <= 500):
      desconto = 15
else:
      desconto = 20
                 
valor_desconto = (valor_compra * desconto) / 100
valor_pagar = valor_compra - valor_desconto

print("Nome do Cliente: ",nome)
print("Valor da Compra: ",valor_compra)
print("O percentual de desc: ",desconto)
print("Valor do desconto: ",valor_desconto)
print("Valor a pagar: ",valor_pagar)
