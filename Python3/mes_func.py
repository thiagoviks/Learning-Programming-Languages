"""
Problema: Ler para uma variável INTEIRA um número de 1 a 12 e mostrar o nome do mês correspondente.
 Caso o mês não existir, mostrar essa informação."""

def um():
   return "Janeiro"

def dois():
    return "Fevereiro"

def tres():
    return "Março"

def quatro():
    return "Abril"

def cinco():
    return "Maio"

def seis():
    return "Junho"

def sete():
    return "Julho"

def oito():
    return "Agosto"

def nove():
    return "Setembro"

def dez():
    return "Outubro"

def onze():
    return "Novembro"

def doze():
    return "Dezembro"    
   
def mes(args):
    switcher = {
        1: um,
        2: dois,
        3: tres,
        4: quatro,
        5: cinco,
        6: seis,
        7: sete,
        8: oito,
        9: nove,
        10: dez,
        11: onze,
        12: doze
    }
    mes_func = switcher.get(args, "Mês inválido")
    print(mes_func())

escolha = int(input("Escolha um mês do ano através do (1 ao 12): "))
mes(escolha)
