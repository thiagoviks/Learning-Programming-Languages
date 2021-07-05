import java.util.Scanner;

class crescenteAB {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int a, b;
      System.out.println("digite o valor de A");
      a = sc.nextInt();
      System.out.println("digite o valor de B");
      b = sc.nextInt();
      if (a > b)
         System.out.println("Em ordem crescente B=" + b + " - A=" + a);
      else
         System.out.println("Em ordem crescente A=" + a + " - B=" + b);

      sc.close();
   }
}
