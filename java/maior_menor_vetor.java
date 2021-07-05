
class maior_menor_vetor {
     public static void main(String args[]) {
          int maior_menor[] = { 22, 3, 7, 8, 15, 9, 11, 7, 6, 4 };
          int i, maior = 0, menor = 99999;
          for (i = 0; i < 9; i++) {
               if (maior_menor[i] > maior)
                    maior = maior_menor[i];
               if (maior_menor[i] < menor)
                    menor = maior_menor[i];
          }
          System.out.println("o maior valor: " + maior + "\no menor valor: " + menor);
     }
}
