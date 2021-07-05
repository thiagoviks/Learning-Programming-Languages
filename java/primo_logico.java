import java.util.Scanner;

class primo_logico {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int numero, i;
      boolean contador = true;
      i = 2;
      System.out.println("Digite um numero: ");
      numero = sc.nextInt();
      while ((i <= (numero / 2)) && (contador == true)) {
         System.out.println(i);
         if (numero % i == 0)
            contador = false;
         i++;
      }
      if (contador) // (contador == true)
         System.out.println("O numero " + numero + " e primo");
      else
         System.out.println("O numero " + numero + " nao e primo");
      sc.close();
   }
}
