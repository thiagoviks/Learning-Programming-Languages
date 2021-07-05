import java.util.Scanner;

class primo {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int numero, contador, i;
      contador = 0;
      i = 2;
      System.out.println("Digite um numero : ");
      numero = sc.nextInt();
      while (i < numero) {
         if (numero % i == 0)
            contador = contador + 1;
         i++;
      }
      if (contador > 0)
         System.out.println("O numero " + numero + " nao e primo");
      else
         System.out.println("O numero " + numero + "  e primo");
      sc.close();
   }
}
