"""Problema: Fazer um algoritmo que leia o saldo inicial de cliente do banco
e leia também um cheque que entrou e ANALISE se o cheque poderá ser descontado
ou não , já que este cliente não possui limite. Se o cheque não poderá
ser descontado, mostre essa informação, caso contrário, desconte o
cheque e informe o saldo na tela."""

valor_saldo = int(input("Digite o valor do saldo inicial: "))
cheque_entrou = int(input("Digite o valor do cheque para entrar: "))
if cheque_entrou <= valor_saldo:
     valor_saldo = valor_saldo - cheque_entrou
     print("O seu novo saldo: %f" %(valor_saldo))
else:
     print("Atencao, este cheque nao pode ser descontado: ")
     print("O seu saldo continua: %f" %(valor_saldo))
