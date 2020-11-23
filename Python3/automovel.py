""" Problema: O custo ao consumidor de um carro novo, é a soma do custo de f�brica
com a percentagem do revendedor e com o custo dos impostos (aplicados ao custo
de fábrica). Supondo que a percentagem do revendedor seja de 25% do custo de
fábrica e que os impostos custam 45 % do custo de fábrica, faáa um algoritmo que
 leia o valor de custo de fábrica e determine o preço final do automóvel
 (custo ao consumidor).
 """

print("Calcule o preço final do automóvel")
custo_fabrica = int(input("Entre com o custo de fabrica: "))
perc_revendedor = (25 * custo_fabrica) / 100
impostos = (45 * custo_fabrica) / 100      
preco_final = custo_fabrica + perc_revendedor + impostos
print("O custo de fabrica .........: ",custo_fabrica)
print("O percentual do revendedor .: ",perc_revendedor)
print("Os impostos ................: ",impostos)
print("O preco final ..............: ",preco_final)        

