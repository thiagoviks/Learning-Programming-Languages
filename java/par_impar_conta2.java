import java.util.Scanner;

class par_impar_conta2 {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int numero_inicial, numero_final, numeros_pares, numeros_impares, i;
      numeros_pares = 0;
      numeros_impares = 0;
      System.out.println("Digite o numero inicial: ");
      numero_inicial = sc.nextInt();
      i = numero_inicial;
      do {
         System.out.println("Digite o numero final: ");
         numero_final = sc.nextInt();
         if (numero_final < numero_inicial)
            System.out.println("Numero final invalido, tem que ser maior do que " + numero_inicial);
      } while (numero_final < numero_inicial);

      while (i <= numero_final) {
         if (i % 2 == 0)
            numeros_pares++;
         else
            numeros_impares++;

         i++;
      }
      System.out.println("Entre o numero " + numero_inicial + " e o numero " + numero_final + " existem "
            + numeros_pares + " pares e " + numeros_impares + " impares");

      sc.close();
   }
}
