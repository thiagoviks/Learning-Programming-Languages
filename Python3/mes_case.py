"""Problema: Ler para uma variável INTEIRA um número de 1 a 12 e mostrar o nome do mês correspondente.
 Caso o mês não existir, mostrar essa informação."""
def mes(args):
    switcher = {
        1: "Janeiro",
        2: "Fevereiro",
        3: "Março",
        4: "Abril",
        5: "Maio",
        6: "Junho",
        7: "Julho",
        8: "Augosto",
        9: "Setembro",
        10: "Outubro",
        11: "Novembro",
        12: "Decembro"
    }
    print( switcher.get(args, "Mês inválido"))

escolha = int(input("Escolha um mês do ano através do (1 ao 12): "))
mes(escolha)